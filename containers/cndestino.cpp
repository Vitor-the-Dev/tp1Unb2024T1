#include "../dominios/codigo.hpp"
#include "../containers/cndestino.hpp"

// Implementação de instancia do container.

/**
 * @brief Instancia ContainerDestino.
 * @author Pedro Afonso Custódio de Lima - 232011350
 */
ContainerDestino* ContainerDestino::instancia = nullptr;
ContainerDestino* ContainerDestino::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerDestino();
    return instancia;
}

// Implementações de métodos de classe container.
/**
 * Método construtor.
 */
ContainerDestino::ContainerDestino() {}

/**
 * @brief Cria um novo destino no contêiner.
 *
 * Verifica se já existe um destino com o mesmo código. Caso não exista,
 * o destino é adicionado ao final da lista interna.
 *
 * @param destino Referência para objeto Destino a ser incluído.
 * @return true se o destino foi incluída com sucesso,
 * @return false se já existir um destino com o mesmo código.
 */
bool ContainerDestino::criar(const Destino &destino) {
    // Verifica se já existe destino com mesmo código
    for (auto &d : destinos) {
        if (d.getCodigo().getValor() == destino.getCodigo().getValor()) {
            return false;  // Destino duplicado
        }
    }
    destinos.push_back(destino);
    return true;
}

/**
 * @brief Lista destinos do contêiner.
 *
 * @return true se os destinos foram encontrados,
 * @return false caso contrário.
 */
bool ContainerDestino::listar(std::list<Destino> *listaDestinos) {
    // Usa listaDestinos passada por parâmetro
    if (destinos.size() > 0) {
        *listaDestinos = destinos;    // Retorna Destinos encontrados via parâmetro
        return true;
    }
    return false;
}

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
bool ContainerDestino::ler(Destino *destino) {
    for (auto &d : destinos) {
        if (d.getCodigo().getValor() == destino->getCodigo().getValor()) {
            *destino = d;
            return true;
        }
    }
    return false;
}

/**
 * @brief Atualiza os dados de um destino existente no contêiner.
 *
 * Identifica o destino pelo código contido em `destino`. Se o destino existir,
 * substitui os dados antigos pelos novos (armazenados em `destino`).
 *
 * @param destino Referência para o objeto Destino que contém os dados atualizados.
 * @return true se o destino foi encontrada e atualizada,
 * @return false caso não exista destino com o código fornecido.
 */
bool ContainerDestino::atualizar(const Destino &destino) {
    for (auto &d : destinos) {
        if (d.getCodigo().getValor() == destino.getCodigo().getValor()) {
            d = destino;
            return true;
        }
    }
    return false;
}

/**
 * @brief Exclui um destino do contêiner, identificada pelo seu código.
 *
 * Percorre a lista interna para encontrar um destino com o código informado
 * e, se encontrado, remove-o.
 *
 * @param codigo Objeto do domínio Codigo que identifica o destino a ser removido.
 * @return true se o destino foi encontrado e removido,
 * @return false caso o destino não seja encontrado.
 */
bool ContainerDestino::excluir(const Codigo &codigo) {
    for (auto it = destinos.begin(); it != destinos.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            destinos.erase(it);
            return true;
        }
    }
    return false;
}
