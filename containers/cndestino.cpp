#include "../dominios/codigo.hpp"
#include "../containers/cndestino.hpp"

// Implementa��o de instancia do container.

/**
 * @brief Instancia ContainerDestino.
 * @author Pedro Afonso Cust�dio de Lima - 232011350
 */
ContainerDestino* ContainerDestino::instancia = nullptr;
ContainerDestino* ContainerDestino::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerDestino();
    return instancia;
}

// Implementa��es de m�todos de classe container.
/**
 * M�todo construtor.
 */
ContainerDestino::ContainerDestino() {}

/**
 * @brief Cria um novo destino no cont�iner.
 *
 * Verifica se j� existe um destino com o mesmo c�digo. Caso n�o exista,
 * o destino � adicionado ao final da lista interna.
 *
 * @param destino Refer�ncia para objeto Destino a ser inclu�do.
 * @return true se o destino foi inclu�da com sucesso,
 * @return false se j� existir um destino com o mesmo c�digo.
 */
bool ContainerDestino::criar(const Destino &destino) {
    // Verifica se j� existe destino com mesmo c�digo
    for (auto &d : destinos) {
        if (d.getCodigo().getValor() == destino.getCodigo().getValor()) {
            return false;  // Destino duplicado
        }
    }
    destinos.push_back(destino);
    return true;
}

/**
 * @brief Lista destinos do cont�iner.
 *
 * @return true se os destinos foram encontrados,
 * @return false caso contr�rio.
 */
bool ContainerDestino::listar(std::list<Destino> *listaDestinos) {
    // Usa listaDestinos passada por par�metro
    if (destinos.size() > 0) {
        *listaDestinos = destinos;    // Retorna Destinos encontrados via par�metro
        return true;
    }
    return false;
}

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
 * @brief Atualiza os dados de um destino existente no cont�iner.
 *
 * Identifica o destino pelo c�digo contido em `destino`. Se o destino existir,
 * substitui os dados antigos pelos novos (armazenados em `destino`).
 *
 * @param destino Refer�ncia para o objeto Destino que cont�m os dados atualizados.
 * @return true se o destino foi encontrada e atualizada,
 * @return false caso n�o exista destino com o c�digo fornecido.
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
 * @brief Exclui um destino do cont�iner, identificada pelo seu c�digo.
 *
 * Percorre a lista interna para encontrar um destino com o c�digo informado
 * e, se encontrado, remove-o.
 *
 * @param codigo Objeto do dom�nio Codigo que identifica o destino a ser removido.
 * @return true se o destino foi encontrado e removido,
 * @return false caso o destino n�o seja encontrado.
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
