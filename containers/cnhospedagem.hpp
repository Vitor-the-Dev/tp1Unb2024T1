#ifndef CNHOSPEDAGEM_HPP_INCLUDED
#define CNHOSPEDAGEM_HPP_INCLUDED

#include <list>
#include "../entidades/hospedagem.hpp"

/**
 * @class ContainerHospedagem
 * @brief Classe respons�vel por armazenar e gerenciar entidades do tipo Hospedagem.
 * @author Vitor Carlos Fernandes - 190142332
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma cole��o de objetos
 * do tipo Hospedagem, oferecendo m�todos para inclus�o, remo��o, pesquisa e atualiza��o.
 */
class ContainerHospedagem {
    private:
        std::list<Hospedagem> hospedagens;  ///< Lista interna de objetos Hospedagem.
        static ContainerHospedagem *instancia; // Ponteiro para inst�ncia da classe.
        ContainerHospedagem(); // Construtor.
    public:
        static ContainerHospedagem* getInstancia(); // M�todo para instanciar classe.

        /**
         * @brief Cria uma nova hospedagem no cont�iner.
         *
         * Verifica se j� existe uma hospedagem com o mesmo c�digo. Caso n�o exista,
         * a hospedagem � adicionada ao final da lista interna.
         *
         * @param hospedagem Refer�ncia para objeto Hospedagem a ser inclu�do.
         * @return true se a hospedagem foi inclu�da com sucesso,
         * @return false se j� existir uma hospedagem com o mesmo c�digo.
         */
        bool criar(const Hospedagem &hospedagem);

        /**
         * @brief Lista hospedagens do cont�iner.
         *
         * @return true se as hospedagens foram encontradas,
         * @return false caso contr�rio.
         */
        bool listar(std::list<Hospedagem> *listaHospedagens);

        /**
         * @brief L� uma hospedagem no cont�iner, usando o c�digo contido no par�metro `hospedagem`.
         *
         * Se a hospedagem for encontrada, os atributos completos dessa hospedagem s�o atribu�dos
         * ao objeto `hospedagem` recebido como par�metro.
         *
         * @param hospedagem Ponteiro para uma inst�ncia de Hospedagem que cont�m o c�digo
         *               a ser pesquisado. Se encontrada, seus dados s�o atualizados.
         * @return true se a hospedagem foi encontrada,
         * @return false caso contr�rio.
         */
        bool ler(Hospedagem *hospedagem);

        /**
         * @brief Atualiza os dados de uma hospedagem existente no cont�iner.
         *
         * Identifica a hospedagem pelo c�digo contido em `hospedagem`. Se a hospedagem existir,
         * substitui os dados antigos pelos novos (armazenados em `hospedagem`).
         *
         * @param hospedagem Refer�ncia para o objeto Hospedagem que cont�m os dados atualizados.
         * @return true se a hospedagem foi encontrada e atualizada,
         * @return false caso n�o exista hospedagem com o c�digo fornecido.
         */
        bool atualizar(const Hospedagem &hospedagem);

        /**
         * @brief Exclui uma hospedagem do cont�iner, identificada pelo seu c�digo.
         *
         * Percorre a lista interna para encontrar uma hospedagem com o c�digo informado
         * e, se encontrada, remove-a.
         *
         * @param codigo Objeto do dom�nio Codigo que identifica a hospedagem a ser removida.
         * @return true se a hospedagem foi encontrada e removida,
         * @return false caso a hospedagem n�o seja encontrada.
         */
        bool excluir(const Codigo &codigo);
};

#endif // CNHOSPEDAGEM_HPP_INCLUDED
