#ifndef CNVIAGEM_HPP_INCLUDED
#define CNVIAGEM_HPP_INCLUDED

#include <list>
#include "../entidades/viagem.hpp"

/**
 * @class ContainerViagem
 * @brief Classe respons�vel por armazenar e gerenciar entidades do tipo Viagem.
 * @author Vitor Carlos Fernandes - 190142332
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma cole��o de objetos
 * do tipo Viagem, oferecendo m�todos para inclus�o, remo��o, pesquisa e atualiza��o.
 */
class ContainerViagem {
    private:
        std::list<Viagem> viagens;  ///< Lista interna de objetos Viagem.
        static ContainerViagem *instancia; // Ponteiro para inst�ncia da classe.
        ContainerViagem(); // Construtor.
    public:
        static ContainerViagem* getInstancia(); // M�todo para instanciar classe.

        /**
         * @brief Cria uma nova viagem no cont�iner.
         *
         * Verifica se j� existe uma viagem com o mesmo c�digo. Caso n�o exista,
         * a viagem � adicionada ao final da lista interna.
         *
         * @param viagem Refer�ncia para objeto Viagem a ser inclu�do.
         * @return true se a viagem foi inclu�da com sucesso,
         * @return false se j� existir uma viagem com o mesmo c�digo.
         */
        bool criar(const Viagem &viagem);

        /**
         * @brief Lista viagens do cont�iner.
         *
         * @return true se a viagens foram encontradas,
         * @return false caso contr�rio.
         */
        bool listar(std::list<Viagem> *listaViagens);

        /**
         * @brief L� uma viagem no cont�iner, usando o c�digo contido no par�metro `viagem`.
         *
         * Se a viagem for encontrada, os atributos completos dessa viagem s�o atribu�dos
         * ao objeto `viagem` recebido como par�metro.
         *
         * @param viagem Ponteiro para uma inst�ncia de Viagem que cont�m o c�digo
         *               a ser pesquisado. Se encontrada, seus dados s�o atualizados.
         * @return true se a viagem foi encontrada,
         * @return false caso contr�rio.
         */
        bool ler(Viagem *viagem);

        /**
         * @brief Atualiza os dados de uma viagem existente no cont�iner.
         *
         * Identifica a viagem pelo c�digo contido em `viagem`. Se a viagem existir,
         * substitui os dados antigos pelos novos (armazenados em `viagem`).
         *
         * @param viagem Refer�ncia para o objeto Viagem que cont�m os dados atualizados.
         * @return true se a viagem foi encontrada e atualizada,
         * @return false caso n�o exista viagem com o c�digo fornecido.
         */
        bool atualizar(const Viagem &viagem);

        /**
         * @brief Exclui uma viagem do cont�iner, identificada pelo seu c�digo.
         *
         * Percorre a lista interna para encontrar uma viagem com o c�digo informado
         * e, se encontrada, remove-a.
         *
         * @param codigo Objeto do dom�nio Codigo que identifica a viagem a ser removida.
         * @return true se a viagem foi encontrada e removida,
         * @return false caso a viagem n�o seja encontrada.
         */
        bool excluir(const Codigo &codigo);
};

#endif // CNVIAGEM_HPP_INCLUDED
