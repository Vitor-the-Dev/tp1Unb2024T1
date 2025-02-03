#include "cisconta.hpp"
#include "../containers/cnconta.hpp"

/**
 * @brief Solicita criar uma nova conta no contêiner.
 * @param conta Referência para objeto Viagem a ser incluído.
 * @return true se a conta foi incluída com sucesso,
 * @return false se já existir uma conta com o mesmo código.
 */
bool CntrISConta::criar(const Conta &conta, string &erro){

    if (!ContainerConta::getInstancia()->criar(conta)) {
        erro = "Erro: conta duplicada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita listar as contas no contêiner.
 * @param conta Referência para objeto Viagem a ser listado.
 * @return true se as contas foram listadas com sucesso,
 * @return false se não foram.
 */
bool CntrISConta::listar(std::list<Conta> &contas, string &erro){

    if (!ContainerConta::getInstancia()->listar(&contas)) {
        erro = "Erro: nenhuma conta localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita ler uma conta no contêiner.
 * @param conta Referência para objeto Viagem a ser incluído.
 * @return true se a conta foi lida com sucesso,
 * @return false se não foi.
 */
bool CntrISConta::ler(Conta &conta, string &erro){

    if (!ContainerConta::getInstancia()->ler(&conta)) {
        erro = "Erro: conta nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita atualizar uma conta no contêiner.
 * @param conta Referência para objeto Viagem a ser atualizado.
 * @return true se a conta foi atualizada com sucesso,
 * @return false se não foi.
 */
bool CntrISConta::atualizar(const Conta &conta, string &erro){

    if (!ContainerConta::getInstancia()->atualizar(conta)) {
        erro = "Erro: conta nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita excluir uma conta no contêiner.
 * @param codigo Referência para objeto Viagem a ser excluido.
 * @return true se a conta foi excluida com sucesso,
 * @return false se não foi.
 */
bool CntrISConta::excluir(const Codigo &codigo, string &erro){

    if (!ContainerConta::getInstancia()->excluir(codigo)) {
        erro = "Erro: conta nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Adiciona uma viagem a uma conta específica.
 */
bool CntrISConta::adicionarViagemParaConta(const Conta &conta, const Viagem &viagem, string &erro) {
    ContainerConta::getInstancia()->adicionarViagemParaConta(conta, viagem);
    return true; // Sucesso
}

/**
 * @brief Remove uma viagem associada a uma conta.
 */
bool CntrISConta::removerViagemDeConta(const Conta &conta, const Viagem &viagem, string &erro) {
    /*ContainerConta* container = ContainerConta::getInstancia();

    if (!container->removerViagemDeConta(conta, viagem)) {
        erro = "Erro: Conta ou Viagem não encontrada.";
        return false;
    }*/

    return true;
}

/**
 * @brief Lista viagens associadas a uma conta.
 */
bool CntrISConta::listarViagensPorConta(const Conta &conta, std::vector<Viagem> &viagens, string &erro) {
    /*viagens = ContainerConta::getInstancia()->getViagensPorConta(conta);
    if (viagens.empty()) {
        erro = "Nenhuma viagem encontrada para esta conta.";
        return false;
    }*/
    return true;
}
