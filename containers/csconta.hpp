#ifndef CSCONTA_HPP_INCLUDED
#define CSCONTA_HPP_INCLUDED

#include <list>
#include "../entidades/conta.hpp"

/**
 * @class ContainerConta
 * @brief Classe responsável por armazenar e gerenciar entidades do tipo Conta.
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma coleção de objetos
 * do tipo Conta, oferecendo métodos para inclusão, remoção, pesquisa e atualização.
 */
class ContainerConta {
    private:
        std::list<Conta> contas;  ///< Lista interna de objetos Conta.

    public:
        /**
         * @brief Inclui uma nova conta no contêiner.
         *
         * Verifica se já existe uma conta com o mesmo código. Caso não exista,
         * a conta é adicionada ao final da lista interna.
         *
         * @param conta Referência para objeto Conta a ser incluído.
         * @return true se a conta foi incluída com sucesso,
         * @return false se já existir conta com o mesmo código.
         */
        bool incluir(const Conta &conta);

        /**
         * @brief Remove uma conta do contêiner, identificada pelo seu código.
         *
         * Percorre a lista interna para encontrar uma conta com o código informado
         * e, se encontrada, remove-a.
         *
         * @param codigo Objeto do domínio Codigo que identifica a conta a ser removida.
         * @return true se a conta foi encontrada e removida,
         * @return false caso a conta não seja encontrada.
         */
        bool remover(const Codigo &codigo);

        /**
         * @brief Pesquisa uma conta no contêiner, usando o código contido no parâmetro `conta`.
         *
         * Se a conta for encontrada, os atributos completos dessa conta são atribuídos
         * ao objeto `conta` recebido como parâmetro (ou seja, `conta` passa a conter
         * todos os dados da conta encontrada).
         *
         * @param conta Ponteiro para uma instância de Conta que contém o código
         *              a ser pesquisado (conta->getCodigo()). Se encontrada, seus
         *              dados são atualizados.
         * @return true se a conta foi encontrada,
         * @return false caso contrário.
         */
        bool pesquisar(Conta *conta);

        /**
         * @brief Atualiza os dados de uma conta existente no contêiner.
         *
         * Identifica a conta pelo código contido em `conta`. Se a conta existir,
         * substitui os dados antigos pelos novos (armazenados em `conta`).
         *
         * @param conta Referência para o objeto Conta que contém os dados atualizados.
         * @return true se a conta foi encontrada e atualizada,
         * @return false caso não exista conta com o código fornecido.
         */
        bool atualizar(const Conta &conta);
};

#endif // CSCONTA_HPP_INCLUDED
