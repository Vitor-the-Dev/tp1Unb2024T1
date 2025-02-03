#ifndef CNDESTINO_HPP_INCLUDED
#define CNDESTINO_HPP_INCLUDED

#include <list>
#include "../entidades/destino.hpp"

/**
 * @class ContainerDestino
 * @brief Classe responsável por armazenar e gerenciar entidades do tipo Destino.
 * @author Pedro Afonso Custódio de Lima - 232011350
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma coleção de objetos
 * do tipo Destino, oferecendo métodos para inclusão, remoção, pesquisa e atualização.
 */
class ContainerDestino {
    private:
        std::list<Destino> destinos;  ///< Lista interna de objetos Destino.
        static ContainerDestino *instancia; // Ponteiro para instância da classe.
        ContainerDestino(); // Construtor.
    public:
        static ContainerDestino* getInstancia(); // Método para instanciar classe.

        /**
         * @brief Cria um novo destino no contêiner.
         *
         * Verifica se já existe um destino com o mesmo código. Caso não exista,
         * o destino é adicionado ao final da lista interna.
         *
         * @param destino Referência para objeto Destino a ser incluído.
         * @return true se o destino foi incluído com sucesso,
         * @return false se já existir um destino com o mesmo código.
         */
        bool criar(const Destino &destino);

        /**
         * @brief Lê os destinos no contêiner.
         *
         * @return true se os destinos foram encontrados,
         * @return false caso contrário.
         */
        bool listar(std::list<Destino> *listaDestinos);

        /**
         * @brief Lê um destino no contêiner, usando o código contido no parâmetro `destino`.
         *
         * Se o destino for encontrado, os atributos completos desse destino são atribuídos
         * ao objeto `destino` recebido como parâmetro.
         *
         * @param destino Ponteiro para uma instância de Destino que contém o código
         *               a ser pesquisado. Se encontrado, seus dados são atualizados.
         * @return true se o destino foi encontrado,
         * @return false caso contrário.
         */
        bool ler(Destino *destino);

        /**
         * @brief Atualiza os dados de um destino existente no contêiner.
         *
         * Identifica o destino pelo código contido em `destino`. Se o destino existir,
         * substitui os dados antigos pelos novos (armazenados em `destino`).
         *
         * @param destino Referência para o objeto Destino que contém os dados atualizados.
         * @return true se o destino foi encontrado e atualizado,
         * @return false caso não exista destino com o código fornecido.
         */
        bool atualizar(const Destino &destino);

        /**
         * @brief Exclui um destino do contêiner, identificado pelo seu código.
         *
         * Percorre a lista interna para encontrar um destino com o código informado
         * e, se encontrado, remove-o.
         *
         * @param codigo Objeto do domínio Codigo que identifica o destino a ser removido.
         * @return true se o destino foi encontrado e removido,
         * @return false caso o destino não seja encontrado.
         */
        bool excluir(const Codigo &codigo);
};

#endif // CNDESTINO_HPP_INCLUDED
