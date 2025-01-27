#ifndef CSCONTA_HPP_INCLUDED
#define CSCONTA_HPP_INCLUDED

#include <list>
#include "../entidades/conta.hpp"

/**
 * @class ContainerConta
 * @brief Classe respons�vel por armazenar e gerenciar entidades do tipo Conta.
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma cole��o de objetos
 * do tipo Conta, oferecendo m�todos para inclus�o, remo��o, pesquisa e atualiza��o.
 */
class ContainerConta {
    private:
        std::list<Conta> contas;  ///< Lista interna de objetos Conta.

    public:
        /**
         * @brief Inclui uma nova conta no cont�iner.
         *
         * Verifica se j� existe uma conta com o mesmo c�digo. Caso n�o exista,
         * a conta � adicionada ao final da lista interna.
         *
         * @param conta Refer�ncia para objeto Conta a ser inclu�do.
         * @return true se a conta foi inclu�da com sucesso,
         * @return false se j� existir conta com o mesmo c�digo.
         */
        bool incluir(const Conta &conta);

        /**
         * @brief Remove uma conta do cont�iner, identificada pelo seu c�digo.
         *
         * Percorre a lista interna para encontrar uma conta com o c�digo informado
         * e, se encontrada, remove-a.
         *
         * @param codigo Objeto do dom�nio Codigo que identifica a conta a ser removida.
         * @return true se a conta foi encontrada e removida,
         * @return false caso a conta n�o seja encontrada.
         */
        bool remover(const Codigo &codigo);

        /**
         * @brief Pesquisa uma conta no cont�iner, usando o c�digo contido no par�metro `conta`.
         *
         * Se a conta for encontrada, os atributos completos dessa conta s�o atribu�dos
         * ao objeto `conta` recebido como par�metro (ou seja, `conta` passa a conter
         * todos os dados da conta encontrada).
         *
         * @param conta Ponteiro para uma inst�ncia de Conta que cont�m o c�digo
         *              a ser pesquisado (conta->getCodigo()). Se encontrada, seus
         *              dados s�o atualizados.
         * @return true se a conta foi encontrada,
         * @return false caso contr�rio.
         */
        bool pesquisar(Conta *conta);

        /**
         * @brief Atualiza os dados de uma conta existente no cont�iner.
         *
         * Identifica a conta pelo c�digo contido em `conta`. Se a conta existir,
         * substitui os dados antigos pelos novos (armazenados em `conta`).
         *
         * @param conta Refer�ncia para o objeto Conta que cont�m os dados atualizados.
         * @return true se a conta foi encontrada e atualizada,
         * @return false caso n�o exista conta com o c�digo fornecido.
         */
        bool atualizar(const Conta &conta);
};

#endif // CSCONTA_HPP_INCLUDED
