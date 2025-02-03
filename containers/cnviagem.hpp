#ifndef CNVIAGEM_HPP_INCLUDED
#define CNVIAGEM_HPP_INCLUDED

#include <list>
#include "../entidades/viagem.hpp"

/**
 * @class ContainerViagem
 * @brief Classe responsável por armazenar e gerenciar entidades do tipo Viagem.
 * @author Vitor Carlos Fernandes - 190142332
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma coleção de objetos
 * do tipo Viagem, oferecendo métodos para inclusão, remoção, pesquisa e atualização.
 */
class ContainerViagem {
    private:
        std::list<Viagem> viagens;  ///< Lista interna de objetos Viagem.
        static ContainerViagem *instancia; // Ponteiro para instância da classe.
        ContainerViagem(); // Construtor.
    public:
        static ContainerViagem* getInstancia(); // Método para instanciar classe.

        /**
         * @brief Cria uma nova viagem no contêiner.
         *
         * Verifica se já existe uma viagem com o mesmo código. Caso não exista,
         * a viagem é adicionada ao final da lista interna.
         *
         * @param viagem Referência para objeto Viagem a ser incluído.
         * @return true se a viagem foi incluída com sucesso,
         * @return false se já existir uma viagem com o mesmo código.
         */
        bool criar(const Viagem &viagem);

        /**
         * @brief Lista viagens do contêiner.
         *
         * @return true se a viagens foram encontradas,
         * @return false caso contrário.
         */
        bool listar(std::list<Viagem> *listaViagens);

        /**
         * @brief Lê uma viagem no contêiner, usando o código contido no parâmetro `viagem`.
         *
         * Se a viagem for encontrada, os atributos completos dessa viagem são atribuídos
         * ao objeto `viagem` recebido como parâmetro.
         *
         * @param viagem Ponteiro para uma instância de Viagem que contém o código
         *               a ser pesquisado. Se encontrada, seus dados são atualizados.
         * @return true se a viagem foi encontrada,
         * @return false caso contrário.
         */
        bool ler(Viagem *viagem);

        /**
         * @brief Atualiza os dados de uma viagem existente no contêiner.
         *
         * Identifica a viagem pelo código contido em `viagem`. Se a viagem existir,
         * substitui os dados antigos pelos novos (armazenados em `viagem`).
         *
         * @param viagem Referência para o objeto Viagem que contém os dados atualizados.
         * @return true se a viagem foi encontrada e atualizada,
         * @return false caso não exista viagem com o código fornecido.
         */
        bool atualizar(const Viagem &viagem);

        /**
         * @brief Exclui uma viagem do contêiner, identificada pelo seu código.
         *
         * Percorre a lista interna para encontrar uma viagem com o código informado
         * e, se encontrada, remove-a.
         *
         * @param codigo Objeto do domínio Codigo que identifica a viagem a ser removida.
         * @return true se a viagem foi encontrada e removida,
         * @return false caso a viagem não seja encontrada.
         */
        bool excluir(const Codigo &codigo);
};

#endif // CNVIAGEM_HPP_INCLUDED
