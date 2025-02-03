#ifndef CNATIVIDADE_HPP_INCLUDED
#define CNATIVIDADE_HPP_INCLUDED

#include <list>
#include "../entidades/atividade.hpp"

/**
 * @class ContainerAtividade
 * @brief Classe respons�vel por armazenar e gerenciar entidades do tipo Atividade.
 * @author Luiz Felippe En�as - 170168221
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma cole��o de objetos
 * do tipo Atividade, oferecendo m�todos para inclus�o, remo��o, pesquisa e atualiza��o.
 */
class ContainerAtividade {
    private:
        std::list<Atividade> atividades;  ///< Lista interna de objetos Atividade.
        static ContainerAtividade *instancia; // Ponteiro para inst�ncia da classe.
        ContainerAtividade(); // Construtor.
    public:
        static ContainerAtividade* getInstancia(); // M�todo para instanciar classe.

        /**
         * @brief Cria uma nova atividade no cont�iner.
         *
         * Verifica se j� existe uma atividade com o mesmo c�digo. Caso n�o exista,
         * a atividade � adicionada ao final da lista interna.
         *
         * @param atividade Refer�ncia para objeto Atividade a ser inclu�do.
         * @return true se a atividade foi inclu�da com sucesso,
         * @return false se j� existir uma atividade com o mesmo c�digo.
         */
        bool criar(const Atividade &atividade);

        /**
         * @brief Lista atividades do cont�iner.
         *
         * @return true se as atividades foram encontradas,
         * @return false caso contr�rio.
         */
        bool listar(std::list<Atividade> *listaAtividades);

        /**
         * @brief L� uma atividade no cont�iner, usando o c�digo contido no par�metro `atividade`.
         *
         * Se a atividade for encontrada, os atributos completos dessa atividade s�o atribu�dos
         * ao objeto `atividade` recebido como par�metro.
         *
         * @param atividade Ponteiro para uma inst�ncia de Atividade que cont�m o c�digo
         *               a ser pesquisado. Se encontrada, seus dados s�o atualizados.
         * @return true se a atividade foi encontrada,
         * @return false caso contr�rio.
         */
        bool ler(Atividade *atividade);

        /**
         * @brief Atualiza os dados de uma atividade existente no cont�iner.
         *
         * Identifica a atividade pelo c�digo contido em `atividade`. Se a atividade existir,
         * substitui os dados antigos pelos novos (armazenados em `atividade`).
         *
         * @param atividade Refer�ncia para o objeto Atividade que cont�m os dados atualizados.
         * @return true se a atividade foi encontrada e atualizada,
         * @return false caso n�o exista atividade com o c�digo fornecido.
         */
        bool atualizar(const Atividade &atividade);

        /**
         * @brief Exclui uma atividade do cont�iner, identificada pelo seu c�digo.
         *
         * Percorre a lista interna para encontrar uma atividade com o c�digo informado
         * e, se encontrada, remove-a.
         *
         * @param codigo Objeto do dom�nio Codigo que identifica a atividade a ser removida.
         * @return true se a atividade foi encontrada e removida,
         * @return false caso a atividade n�o seja encontrada.
         */
        bool excluir(const Codigo &codigo);
};

#endif // CNATIVIDADE_HPP_INCLUDED
