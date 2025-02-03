#include "../dominios/codigo.hpp"
#include "../containers/cnhospedagem.hpp"

// Implementa��o de instancia do container.
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

// Implementa��es de m�todos de classe container.
/**
 * M�todo construtor.
 */
ContainerHospedagem::ContainerHospedagem() {}

/**
 * @brief Cria uma nova hospedagem no cont�iner.
 *
 * Verifica se j� existe uma hospedagem com o mesmo c�digo. Caso n�o exista,
 * a hospedagem � adicionada ao final da lista interna.
 *
 * @param hospedagem Refer�ncia para objeto Hospedagem a ser inclu�do.
 * @return true se a hospedagem foi inclu�da com sucesso,
 * @return false se j� existir uma hospedagem com o mesmo c�digo.
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
 * @brief Lista hospedagens do cont�iner.
 *
 * @return true se as hospedagens foram encontradas,
 * @return false caso contr�rio.
 */
bool ContainerHospedagem::listar(std::list<Hospedagem> *listaHospedagens) {
    if (!hospedagens.empty()) {
        *listaHospedagens = hospedagens;
        return true;
    }
    return false;
}

/**
 * @brief L� uma hospedagem no cont�iner, usando o c�digo contido no par�metro `hospedagem`.
 *
 * Se a hospedagem for encontrada, os atributos completos dessa hospedagem s�o atribu�dos
 * ao objeto `hospedagem` recebido como par�metro.
 *
 * @param hospedagem Ponteiro para uma inst�ncia de Hospedagem que cont�m o c�digo
 *               a ser pesquisado. Se encontrada, seus dados s�o atualizados.
 * @return true se a hospedagem foi encontrada,
 * @return false caso contr�rio.
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
 * @brief Atualiza os dados de uma hospedagem existente no cont�iner.
 *
 * Identifica a hospedagem pelo c�digo contido em `hospedagem`. Se a hospedagem existir,
 * substitui os dados antigos pelos novos (armazenados em `hospedagem`).
 *
 * @param hospedagem Refer�ncia para o objeto Hospedagem que cont�m os dados atualizados.
 * @return true se a hospedagem foi encontrada e atualizada,
 * @return false caso n�o exista hospedagem com o c�digo fornecido.
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
 * @brief Exclui uma hospedagem do cont�iner, identificada pelo seu c�digo.
 *
 * Percorre a lista interna para encontrar uma hospedagem com o c�digo informado
 * e, se encontrada, remove-a.
 *
 * @param codigo Objeto do dom�nio Codigo que identifica a hospedagem a ser removida.
 * @return true se a hospedagem foi encontrada e removida,
 * @return false caso a hospedagem n�o seja encontrada.
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
