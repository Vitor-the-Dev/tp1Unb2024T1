#ifndef CNDESTINO_HPP_INCLUDED
#define CNDESTINO_HPP_INCLUDED

#include <list>
#include "../entidades/destino.hpp"

/**
 * @class ContainerDestino
 * @brief Classe respons�vel por armazenar e gerenciar entidades do tipo Destino.
 * @author Pedro Afonso Cust�dio de Lima - 232011350
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma cole��o de objetos
 * do tipo Destino, oferecendo m�todos para inclus�o, remo��o, pesquisa e atualiza��o.
 */
class ContainerDestino {
    private:
        std::list<Destino> destinos;  ///< Lista interna de objetos Destino.
        static ContainerDestino *instancia; // Ponteiro para inst�ncia da classe.
        ContainerDestino(); // Construtor.
    public:
        static ContainerDestino* getInstancia(); // M�todo para instanciar classe.

        /**
         * @brief Cria um novo destino no cont�iner.
         *
         * Verifica se j� existe um destino com o mesmo c�digo. Caso n�o exista,
         * o destino � adicionado ao final da lista interna.
         *
         * @param destino Refer�ncia para objeto Destino a ser inclu�do.
         * @return true se o destino foi inclu�do com sucesso,
         * @return false se j� existir um destino com o mesmo c�digo.
         */
        bool criar(const Destino &destino);

        /**
         * @brief L� os destinos no cont�iner.
         *
         * @return true se os destinos foram encontrados,
         * @return false caso contr�rio.
         */
        bool listar(std::list<Destino> *listaDestinos);

        /**
         * @brief L� um destino no cont�iner, usando o c�digo contido no par�metro `destino`.
         *
         * Se o destino for encontrado, os atributos completos desse destino s�o atribu�dos
         * ao objeto `destino` recebido como par�metro.
         *
         * @param destino Ponteiro para uma inst�ncia de Destino que cont�m o c�digo
         *               a ser pesquisado. Se encontrado, seus dados s�o atualizados.
         * @return true se o destino foi encontrado,
         * @return false caso contr�rio.
         */
        bool ler(Destino *destino);

        /**
         * @brief Atualiza os dados de um destino existente no cont�iner.
         *
         * Identifica o destino pelo c�digo contido em `destino`. Se o destino existir,
         * substitui os dados antigos pelos novos (armazenados em `destino`).
         *
         * @param destino Refer�ncia para o objeto Destino que cont�m os dados atualizados.
         * @return true se o destino foi encontrado e atualizado,
         * @return false caso n�o exista destino com o c�digo fornecido.
         */
        bool atualizar(const Destino &destino);

        /**
         * @brief Exclui um destino do cont�iner, identificado pelo seu c�digo.
         *
         * Percorre a lista interna para encontrar um destino com o c�digo informado
         * e, se encontrado, remove-o.
         *
         * @param codigo Objeto do dom�nio Codigo que identifica o destino a ser removido.
         * @return true se o destino foi encontrado e removido,
         * @return false caso o destino n�o seja encontrado.
         */
        bool excluir(const Codigo &codigo);
};

#endif // CNDESTINO_HPP_INCLUDED
