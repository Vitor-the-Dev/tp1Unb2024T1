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
 * @brief Classe Stub que implementa a interface de autentica��o (ISAutenticacao).
 *
 * Esta classe simula um servi�o de autentica��o real, armazenando objetos Conta
 * em um cont�iner local (@ref ContainerConta) e verificando credenciais
 * conforme o c�digo e a senha informados.
 */
class StubISAutenticacao: public ISAutenticacao {
    private:
        ContainerConta container; ///< Cont�iner interno de contas

    public:

        /**
         * @brief Construtor da classe StubISAutenticacao.
         *
         * Popula o cont�iner com algumas contas de teste. Caso alguma dessas contas
         * seja inv�lida (por exemplo, senha em sequ�ncia, c�digo fora do padr�o),
         * � lan�ada uma exce��o @c invalid_argument, que � capturada e tratada
         * internamente, exibindo uma mensagem de erro.
         */
        StubISAutenticacao();

        /**
         * @brief Gatilho de falha para simular erro de autentica��o.
         *
         * Se o c�digo for igual a @c "CODFLH", o m�todo de autentica��o retornar� false.
         */
        const string TRIGGER_FALHA = "CODFLH";

        /**
         * @brief Gatilho de erro de sistema.
         *
         * Se o c�digo for igual a @c "CODERR", o m�todo de autentica��o lan�ar�
         * um @c runtime_error, simulando um erro interno no sistema.
         */
        const string TRIGGER_ERRO_SISTEMA = "CODERR";

        /**
         * @brief M�todo que autentica o usu�rio, de acordo com a interface ISAutenticacao.
         *
         * - Verifica se @p codigo � igual a @ref TRIGGER_FALHA; se for, retorna false.
         * - Verifica se @p codigo � igual a @ref TRIGGER_ERRO_SISTEMA; se for, lan�a
         *   exce��o @c runtime_error.
         * - Caso contr�rio, pesquisa no cont�iner uma conta com esse c�digo. Se achar,
         *   compara a senha. Se a senha bater, retorna true; caso contr�rio, false.
         *
         * @param codigo Objeto do dom�nio Codigo, representando o c�digo de usu�rio.
         * @param senha Objeto do dom�nio Senha, representando a senha do usu�rio.
         * @return true se a autentica��o for bem-sucedida,
         * @return false se falhar (n�o encontrou conta ou a senha n�o confere).
         *
         * @throw runtime_error caso o c�digo seja @ref TRIGGER_ERRO_SISTEMA.
         */
        bool autenticar(const Codigo &codigo, const Senha &senha) override;
};

#endif // SISAUTENTICACAO_HPP_INCLUDED
