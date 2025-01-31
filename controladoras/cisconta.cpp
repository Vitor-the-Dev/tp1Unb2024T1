#include "cisconta.hpp"
#include "../containers/cnconta.hpp"

using namespace std;

bool CntrISConta::criar(const Conta &conta, string &erro){

    // Instancia container de Contas.
    ContainerConta *containerConta = ContainerConta::getInstancia();

    if (!containerConta->criar(conta)) {
        erro = "Erro: conta duplicada.";
        return false;
    }

    return true;
}

bool CntrISConta::ler(Conta &conta, string &erro){

    // Instancia container de Contas.
    ContainerConta *containerConta = ContainerConta::getInstancia();

    if (!containerConta->ler(&conta)) {
        erro = "Erro: conta nao localizada.";
        return false;
    }

    return true;
}

bool CntrISConta::atualizar(const Conta &conta, string &erro){

    // Instancia container de Contas.
    ContainerConta *containerConta = ContainerConta::getInstancia();

    if (!containerConta->atualizar(conta)) {
        erro = "Erro: conta nao localizada.";
        return false;
    }

    return true;
}

bool CntrISConta::excluir(const Codigo &codigo, string &erro){

    // Instancia container de Contas.
    ContainerConta *containerConta = ContainerConta::getInstancia();

    if (!containerConta->excluir(codigo)) {
        erro = "Erro: conta nao localizada.";
        return false;
    }

    return true;
}
