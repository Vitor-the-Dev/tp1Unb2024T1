#ifndef SISAUTENTICACAO_HPP_INCLUDED
#define SISAUTENTICACAO_HPP_INCLUDED

#include <stdexcept>
#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"
#include "../interfaces/isautenticacao.hpp"
#include "../containers/csconta.hpp"

using namespace std;

/**
 * @class StubISAutenticacao
 * @brief Classe Stub que implementa a interface de autenticação (ISAutenticacao).
 *
 * Esta classe simula um serviço de autenticação real, armazenando objetos Conta
 * em um contêiner local (@ref ContainerConta) e verificando credenciais
 * conforme o código e a senha informados.
 */
class StubISAutenticacao: public ISAutenticacao {
    private:
        ContainerConta container; ///< Contêiner interno de contas

    public:

        /**
         * @brief Construtor da classe StubISAutenticacao.
         *
         * Popula o contêiner com algumas contas de teste. Caso alguma dessas contas
         * seja inválida (por exemplo, senha em sequência, código fora do padrão),
         * é lançada uma exceção @c invalid_argument, que é capturada e tratada
         * internamente, exibindo uma mensagem de erro.
         */
        StubISAutenticacao();

        /**
         * @brief Gatilho de falha para simular erro de autenticação.
         *
         * Se o código for igual a @c "CODFLH", o método de autenticação retornará false.
         */
        const string TRIGGER_FALHA = "CODFLH";

        /**
         * @brief Gatilho de erro de sistema.
         *
         * Se o código for igual a @c "CODERR", o método de autenticação lançará
         * um @c runtime_error, simulando um erro interno no sistema.
         */
        const string TRIGGER_ERRO_SISTEMA = "CODERR";

        /**
         * @brief Método que autentica o usuário, de acordo com a interface ISAutenticacao.
         *
         * - Verifica se @p codigo é igual a @ref TRIGGER_FALHA; se for, retorna false.
         * - Verifica se @p codigo é igual a @ref TRIGGER_ERRO_SISTEMA; se for, lança
         *   exceção @c runtime_error.
         * - Caso contrário, pesquisa no contêiner uma conta com esse código. Se achar,
         *   compara a senha. Se a senha bater, retorna true; caso contrário, false.
         *
         * @param codigo Objeto do domínio Codigo, representando o código de usuário.
         * @param senha Objeto do domínio Senha, representando a senha do usuário.
         * @return true se a autenticação for bem-sucedida,
         * @return false se falhar (não encontrou conta ou a senha não confere).
         *
         * @throw runtime_error caso o código seja @ref TRIGGER_ERRO_SISTEMA.
         */
        bool autenticar(const Codigo &codigo, const Senha &senha) override;
};

#endif // SISAUTENTICACAO_HPP_INCLUDED
