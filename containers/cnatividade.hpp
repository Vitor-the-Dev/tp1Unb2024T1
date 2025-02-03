#ifndef CNATIVIDADE_HPP_INCLUDED
#define CNATIVIDADE_HPP_INCLUDED

#include <list>
#include "../entidades/atividade.hpp"

/**
 * @class ContainerAtividade
 * @brief Classe responsável por armazenar e gerenciar entidades do tipo Atividade.
 * @author Luiz Felippe Enéas - 170168221
 *
 * Esta classe utiliza a STL (`std::list`) para manter uma coleção de objetos
 * do tipo Atividade, oferecendo métodos para inclusão, remoção, pesquisa e atualização.
 */
class ContainerAtividade {
    private:
        std::list<Atividade> atividades;  ///< Lista interna de objetos Atividade.
        static ContainerAtividade *instancia; // Ponteiro para instância da classe.
        ContainerAtividade(); // Construtor.
    public:
        static ContainerAtividade* getInstancia(); // Método para instanciar classe.

        /**
         * @brief Cria uma nova atividade no contêiner.
         *
         * Verifica se já existe uma atividade com o mesmo código. Caso não exista,
         * a atividade é adicionada ao final da lista interna.
         *
         * @param atividade Referência para objeto Atividade a ser incluído.
         * @return true se a atividade foi incluída com sucesso,
         * @return false se já existir uma atividade com o mesmo código.
         */
        bool criar(const Atividade &atividade);

        /**
         * @brief Lista atividades do contêiner.
         *
         * @return true se as atividades foram encontradas,
         * @return false caso contrário.
         */
        bool listar(std::list<Atividade> *listaAtividades);

        /**
         * @brief Lê uma atividade no contêiner, usando o código contido no parâmetro `atividade`.
         *
         * Se a atividade for encontrada, os atributos completos dessa atividade são atribuídos
         * ao objeto `atividade` recebido como parâmetro.
         *
         * @param atividade Ponteiro para uma instância de Atividade que contém o código
         *               a ser pesquisado. Se encontrada, seus dados são atualizados.
         * @return true se a atividade foi encontrada,
         * @return false caso contrário.
         */
        bool ler(Atividade *atividade);

        /**
         * @brief Atualiza os dados de uma atividade existente no contêiner.
         *
         * Identifica a atividade pelo código contido em `atividade`. Se a atividade existir,
         * substitui os dados antigos pelos novos (armazenados em `atividade`).
         *
         * @param atividade Referência para o objeto Atividade que contém os dados atualizados.
         * @return true se a atividade foi encontrada e atualizada,
         * @return false caso não exista atividade com o código fornecido.
         */
        bool atualizar(const Atividade &atividade);

        /**
         * @brief Exclui uma atividade do contêiner, identificada pelo seu código.
         *
         * Percorre a lista interna para encontrar uma atividade com o código informado
         * e, se encontrada, remove-a.
         *
         * @param codigo Objeto do domínio Codigo que identifica a atividade a ser removida.
         * @return true se a atividade foi encontrada e removida,
         * @return false caso a atividade não seja encontrada.
         */
        bool excluir(const Codigo &codigo);
};

#endif // CNATIVIDADE_HPP_INCLUDED
