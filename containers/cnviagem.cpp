#include "../dominios/codigo.hpp"
#include "../containers/cnviagem.hpp"

// Implementa��o de instancia do container.
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

// Implementa��es de m�todos de classe container.
/**
 * M�todo construtor.
 */
ContainerViagem::ContainerViagem() {}

/**
 * @brief Cria uma nova viagem no cont�iner.
 *
 * Verifica se j� existe uma viagem com o mesmo c�digo. Caso n�o exista,
 * a viagem � adicionada ao final da lista interna.
 *
 * @param viagem Refer�ncia para objeto Viagem a ser inclu�do.
 * @return true se a viagem foi inclu�da com sucesso,
 * @return false se j� existir uma viagem com o mesmo c�digo.
 */
bool ContainerViagem::criar(const Viagem &viagem) {
    // Verifica se j� existe viagem com mesmo c�digo
    for (auto &v : viagens) {
        if (v.getCodigo().getValor() == viagem.getCodigo().getValor()) {
            return false;  // Viagem duplicada
        }
    }
    viagens.push_back(viagem);
    return true;
}

/**
 * @brief Lista viagens do cont�iner.
 *
 * @return true se a viagens foram encontradas,
 * @return false caso contr�rio.
 */
bool ContainerViagem::listar(std::list<Viagem> *listaViagens) {
    // Usa listaViagens passada por par�metro
    if (viagens.size() > 0) {
        *listaViagens = viagens;    // Retorna Viagens encontradas via par�metro
        return true;
    }
    return false;
}

/**
 * @brief L� uma viagem no cont�iner, usando o c�digo contido no par�metro `viagem`.
 *
 * Se a viagem for encontrada, os atributos completos dessa viagem s�o atribu�dos
 * ao objeto `viagem` recebido como par�metro.
 *
 * @param viagem Ponteiro para uma inst�ncia de Viagem que cont�m o c�digo
 *               a ser pesquisado. Se encontrada, seus dados s�o atualizados.
 * @return true se a viagem foi encontrada,
 * @return false caso contr�rio.
 */
bool ContainerViagem::ler(Viagem *viagem) {
    // Usa o codigo da viagem passada por par�metro
    for (auto &v : viagens) {
        if (v.getCodigo().getValor() == viagem->getCodigo().getValor()) {
            *viagem = v;    // Retorna a viagem encontrada via par�metro
            return true;
        }
    }
    return false;
}

/**
 * @brief Atualiza os dados de uma viagem existente no cont�iner.
 *
 * Identifica a viagem pelo c�digo contido em `viagem`. Se a viagem existir,
 * substitui os dados antigos pelos novos (armazenados em `viagem`).
 *
 * @param viagem Refer�ncia para o objeto Viagem que cont�m os dados atualizados.
 * @return true se a viagem foi encontrada e atualizada,
 * @return false caso n�o exista viagem com o c�digo fornecido.
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
 * @brief Exclui uma viagem do cont�iner, identificada pelo seu c�digo.
 *
 * Percorre a lista interna para encontrar uma viagem com o c�digo informado
 * e, se encontrada, remove-a.
 *
 * @param codigo Objeto do dom�nio Codigo que identifica a viagem a ser removida.
 * @return true se a viagem foi encontrada e removida,
 * @return false caso a viagem n�o seja encontrada.
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
