#include "../dominios/codigo.hpp"
#include "../containers/cnviagem.hpp"

// Implementação de instancia do container.
/**
 * @brief Instancia ContainerViagem.
 * @author Vitor Carlos Fernandes - 190142332
 */
ContainerViagem* ContainerViagem::instancia = nullptr;
ContainerViagem* ContainerViagem::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerViagem();
    return instancia;
}

// Implementações de métodos de classe container.
/**
 * Método construtor.
 */
ContainerViagem::ContainerViagem() {}

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
bool ContainerViagem::criar(const Viagem &viagem) {
    // Verifica se já existe viagem com mesmo código
    for (auto &v : viagens) {
        if (v.getCodigo().getValor() == viagem.getCodigo().getValor()) {
            return false;  // Viagem duplicada
        }
    }
    viagens.push_back(viagem);
    return true;
}

/**
 * @brief Lista viagens do contêiner.
 *
 * @return true se a viagens foram encontradas,
 * @return false caso contrário.
 */
bool ContainerViagem::listar(std::list<Viagem> *listaViagens) {
    // Usa listaViagens passada por parâmetro
    if (viagens.size() > 0) {
        *listaViagens = viagens;    // Retorna Viagens encontradas via parâmetro
        return true;
    }
    return false;
}

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
bool ContainerViagem::ler(Viagem *viagem) {
    // Usa o codigo da viagem passada por parâmetro
    for (auto &v : viagens) {
        if (v.getCodigo().getValor() == viagem->getCodigo().getValor()) {
            *viagem = v;    // Retorna a viagem encontrada via parâmetro
            return true;
        }
    }
    return false;
}

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
bool ContainerViagem::atualizar(const Viagem &viagem) {
    for (auto &v : viagens) {
        if (v.getCodigo().getValor() == viagem.getCodigo().getValor()) {
            v = viagem;     // Sobrescreve
            return true;
        }
    }
    return false;
}

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
bool ContainerViagem::excluir(const Codigo &codigo) {
    for (auto it = viagens.begin(); it != viagens.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            viagens.erase(it);
            return true;
        }
    }
    return false;
}
