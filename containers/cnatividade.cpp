#include "../dominios/codigo.hpp"
#include "../containers/cnatividade.hpp"

// Implementa��o de instancia do container.
/**
 * @brief Instancia ContainerAtividade.
 * @author Luiz Felippe En�as - 170168221
 */
ContainerAtividade* ContainerAtividade::instancia = nullptr;
ContainerAtividade* ContainerAtividade::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerAtividade();
    return instancia;
}

// Implementa��es de m�todos de classe container.
/**
 * M�todo construtor.
 */
ContainerAtividade::ContainerAtividade() {}

/**
 * @brief Cria uma nova atividade no cont�iner.
 *
 * Verifica se j� existe uma atividade com o mesmo c�digo. Caso n�o exista,
 * a atividade � adicionada ao final da lista interna.
 *
 * @param atividade Refer�ncia para objeto Atividade a ser inclu�do.
 * @return true se a atividade foi inclu�da com sucesso,
 * @return false se j� existir uma atividade com o mesmo c�digo.
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
 * @brief Lista atividades do cont�iner.
 *
 * @return true se as atividades foram encontradas,
 * @return false caso contr�rio.
 */
bool ContainerAtividade::listar(std::list<Atividade> *listaAtividades) {
    if (!atividades.empty()) {
        *listaAtividades = atividades;
        return true;
    }
    return false;
}

/**
 * @brief L� uma atividade no cont�iner, usando o c�digo contido no par�metro `atividade`.
 *
 * Se a atividade for encontrada, os atributos completos dessa atividade s�o atribu�dos
 * ao objeto `atividade` recebido como par�metro.
 *
 * @param atividade Ponteiro para uma inst�ncia de Atividade que cont�m o c�digo
 *               a ser pesquisado. Se encontrada, seus dados s�o atualizados.
 * @return true se a atividade foi encontrada,
 * @return false caso contr�rio.
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
 * @brief Atualiza os dados de uma atividade existente no cont�iner.
 *
 * Identifica a atividade pelo c�digo contido em `atividade`. Se a atividade existir,
 * substitui os dados antigos pelos novos (armazenados em `atividade`).
 *
 * @param atividade Refer�ncia para o objeto Atividade que cont�m os dados atualizados.
 * @return true se a atividade foi encontrada e atualizada,
 * @return false caso n�o exista atividade com o c�digo fornecido.
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
 * @brief Exclui uma atividade do cont�iner, identificada pelo seu c�digo.
 *
 * Percorre a lista interna para encontrar uma atividade com o c�digo informado
 * e, se encontrada, remove-a.
 *
 * @param codigo Objeto do dom�nio Codigo que identifica a atividade a ser removida.
 * @return true se a atividade foi encontrada e removida,
 * @return false caso a atividade n�o seja encontrada.
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
