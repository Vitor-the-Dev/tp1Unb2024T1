#include "../dominios/codigo.hpp"
#include "../containers/cnhospedagem.hpp"

// Implementação de instancia do container.
/**
 * @brief Instancia ContainerHospedagem.
 * @author Vitor Carlos Fernandes - 190142332
 */
ContainerHospedagem* ContainerHospedagem::instancia = nullptr;
ContainerHospedagem* ContainerHospedagem::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerHospedagem();
    return instancia;
}

// Implementações de métodos de classe container.
/**
 * Método construtor.
 */
ContainerHospedagem::ContainerHospedagem() {}

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
bool ContainerHospedagem::criar(const Hospedagem &hospedagem) {
    for (auto &h : hospedagens) {
        if (h.getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
            return false;
        }
    }
    hospedagens.push_back(hospedagem);
    return true;
}

/**
 * @brief Lista hospedagens do contêiner.
 *
 * @return true se as hospedagens foram encontradas,
 * @return false caso contrário.
 */
bool ContainerHospedagem::listar(std::list<Hospedagem> *listaHospedagens) {
    if (!hospedagens.empty()) {
        *listaHospedagens = hospedagens;
        return true;
    }
    return false;
}

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
bool ContainerHospedagem::ler(Hospedagem *hospedagem) {
    for (auto &h : hospedagens) {
        if (h.getCodigo().getValor() == hospedagem->getCodigo().getValor()) {
            *hospedagem = h;
            return true;
        }
    }
    return false;
}

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
bool ContainerHospedagem::atualizar(const Hospedagem &hospedagem) {
    for (auto &h : hospedagens) {
        if (h.getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
            h = hospedagem;
            return true;
        }
    }
    return false;
}

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
bool ContainerHospedagem::excluir(const Codigo &codigo) {
    for (auto it = hospedagens.begin(); it != hospedagens.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            hospedagens.erase(it);
            return true;
        }
    }
    return false;
}
