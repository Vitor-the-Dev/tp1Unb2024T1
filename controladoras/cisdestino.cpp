#include "cisdestino.hpp"
#include "../containers/cndestino.hpp"

bool CntrISDestino::criar(const Destino &destino, string &erro){

    if (!ContainerDestino::getInstancia()->criar(destino)) {
        erro = "Erro: destino duplicado.";
        return false;
    }

    return true;
}

bool CntrISDestino::listar(std::list<Destino> &destinos, string &erro){

    if (!ContainerDestino::getInstancia()->listar(&destinos)) {
        erro = "Erro: nenhum destino localizado.";
        return false;
    }

    return true;
}

bool CntrISDestino::ler(Destino &destino, string &erro){

    if (!ContainerDestino::getInstancia()->ler(&destino)) {
        erro = "Erro: destino nao localizado.";
        return false;
    }

    return true;
}

bool CntrISDestino::atualizar(const Destino &destino, string &erro){

    if (!ContainerDestino::getInstancia()->atualizar(destino)) {
        erro = "Erro: destino nao localizado.";
        return false;
    }

    return true;
}

bool CntrISDestino::excluir(const Codigo &codigo, string &erro){

    if (!ContainerDestino::getInstancia()->excluir(codigo)) {
        erro = "Erro: destino nao localizado.";
        return false;
    }

    return true;
}
