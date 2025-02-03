#ifndef CNHOSPEDAGEM_HPP_INCLUDED
#define CNHOSPEDAGEM_HPP_INCLUDED

#include <list>
#include "../entidades/hospedagem.hpp"

/**
 * @class ContainerHospedagem
 * @brief Classe responsável por armazenar e gerenciar entidades do tipo Hospedagem.
 * @author Vitor Carlos Fernandes - 190142332
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma coleção de objetos
 * do tipo Hospedagem, oferecendo métodos para inclusão, remoção, pesquisa e atualização.
 */
class ContainerHospedagem {
    private:
        std::list<Hospedagem> hospedagens;  ///< Lista interna de objetos Hospedagem.
        static ContainerHospedagem *instancia; // Ponteiro para instância da classe.
        ContainerHospedagem(); // Construtor.
    public:
        static ContainerHospedagem* getInstancia(); // Método para instanciar classe.

        /**
         * @brief Cria uma nova hospedagem no contêiner.
         *
         * Verifica se já existe uma hospedagem com o mesmo código. Caso não exista,
         * a hospedagem é adicionada ao final da lista interna.
         *
         * @param hospedagem Referência para objeto Hospedagem a ser incluído.
         * @return true se a hospedagem foi incluída com sucesso,
         * @return false se já existir uma hospedagem com o mesmo código.
         */
        bool criar(const Hospedagem &hospedagem);

        /**
         * @brief Lista hospedagens do contêiner.
         *
         * @return true se as hospedagens foram encontradas,
         * @return false caso contrário.
         */
        bool listar(std::list<Hospedagem> *listaHospedagens);

        /**
         * @brief Lê uma hospedagem no contêiner, usando o código contido no parâmetro `hospedagem`.
         *
         * Se a hospedagem for encontrada, os atributos completos dessa hospedagem são atribuídos
         * ao objeto `hospedagem` recebido como parâmetro.
         *
         * @param hospedagem Ponteiro para uma instância de Hospedagem que contém o código
         *               a ser pesquisado. Se encontrada, seus dados são atualizados.
         * @return true se a hospedagem foi encontrada,
         * @return false caso contrário.
         */
        bool ler(Hospedagem *hospedagem);

        /**
         * @brief Atualiza os dados de uma hospedagem existente no contêiner.
         *
         * Identifica a hospedagem pelo código contido em `hospedagem`. Se a hospedagem existir,
         * substitui os dados antigos pelos novos (armazenados em `hospedagem`).
         *
         * @param hospedagem Referência para o objeto Hospedagem que contém os dados atualizados.
         * @return true se a hospedagem foi encontrada e atualizada,
         * @return false caso não exista hospedagem com o código fornecido.
         */
        bool atualizar(const Hospedagem &hospedagem);

        /**
         * @brief Exclui uma hospedagem do contêiner, identificada pelo seu código.
         *
         * Percorre a lista interna para encontrar uma hospedagem com o código informado
         * e, se encontrada, remove-a.
         *
         * @param codigo Objeto do domínio Codigo que identifica a hospedagem a ser removida.
         * @return true se a hospedagem foi encontrada e removida,
         * @return false caso a hospedagem não seja encontrada.
         */
        bool excluir(const Codigo &codigo);
};

#endif // CNHOSPEDAGEM_HPP_INCLUDED
