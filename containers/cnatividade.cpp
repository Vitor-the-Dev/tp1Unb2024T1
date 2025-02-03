#include "../dominios/codigo.hpp"
#include "../containers/cnatividade.hpp"

// Implementação de instancia do container.
/**
 * @brief Instancia ContainerAtividade.
 * @author Luiz Felippe Enéas - 170168221
 */
ContainerAtividade* ContainerAtividade::instancia = nullptr;
ContainerAtividade* ContainerAtividade::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerAtividade();
    return instancia;
}

// Implementações de métodos de classe container.
/**
 * Método construtor.
 */
ContainerAtividade::ContainerAtividade() {}

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
bool ContainerAtividade::criar(const Atividade &atividade) {
    for (auto &a : atividades) {
        if (a.getCodigo().getValor() == atividade.getCodigo().getValor()) {
            return false;
        }
    }
    atividades.push_back(atividade);
    return true;
}

/**
 * @brief Lista atividades do contêiner.
 *
 * @return true se as atividades foram encontradas,
 * @return false caso contrário.
 */
bool ContainerAtividade::listar(std::list<Atividade> *listaAtividades) {
    if (!atividades.empty()) {
        *listaAtividades = atividades;
        return true;
    }
    return false;
}

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
bool ContainerAtividade::ler(Atividade *atividade) {
    for (auto &a : atividades) {
        if (a.getCodigo().getValor() == atividade->getCodigo().getValor()) {
            *atividade = a;
            return true;
        }
    }
    return false;
}

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
bool ContainerAtividade::atualizar(const Atividade &atividade) {
    for (auto &a : atividades) {
        if (a.getCodigo().getValor() == atividade.getCodigo().getValor()) {
            a = atividade;
            return true;
        }
    }
    return false;
}

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
bool ContainerAtividade::excluir(const Codigo &codigo) {
    for (auto it = atividades.begin(); it != atividades.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            atividades.erase(it);
            return true;
        }
    }
    return false;
}
