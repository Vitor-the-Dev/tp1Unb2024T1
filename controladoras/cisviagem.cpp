#include "cisviagem.hpp"
#include "../containers/cnviagem.hpp"

/**
 * @brief Solicita criar uma nova viagem no contêiner.
 * @param viagem Referência para objeto Viagem a ser incluído.
 * @return true se a viagem foi incluída com sucesso,
 * @return false se já existir uma viagem com o mesmo código.
 */
bool CntrISViagem::criar(const Viagem &viagem, string &erro){

    if (!ContainerViagem::getInstancia()->criar(viagem)) {
        erro = "Erro: viagem duplicada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita listar as viagens no contêiner.
 * @param viagem Referência para objeto Viagem a ser listado.
 * @return true se as viagens foram listadas com sucesso,
 * @return false se não foram.
 */
bool CntrISViagem::listar(std::list<Viagem> &viagens, string &erro){

    if (!ContainerViagem::getInstancia()->listar(&viagens)) {
        erro = "Erro: nenhuma viagem localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita ler uma viagem no contêiner.
 * @param viagem Referência para objeto Viagem a ser incluído.
 * @return true se a viagem foi lida com sucesso,
 * @return false se não foi.
 */
bool CntrISViagem::ler(Viagem &viagem, string &erro){

    if (!ContainerViagem::getInstancia()->ler(&viagem)) {
        erro = "Erro: viagem nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita atualizar uma viagem no contêiner.
 * @param viagem Referência para objeto Viagem a ser atualizado.
 * @return true se a viagem foi atualizada com sucesso,
 * @return false se não foi.
 */
bool CntrISViagem::atualizar(const Viagem &viagem, string &erro){

    if (!ContainerViagem::getInstancia()->atualizar(viagem)) {
        erro = "Erro: viagem nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita excluir uma viagem no contêiner.
 * @param codigo Referência para objeto Viagem a ser excluido.
 * @return true se a viagem foi excluida com sucesso,
 * @return false se não foi.
 */
bool CntrISViagem::excluir(const Codigo &codigo, string &erro){

    if (!ContainerViagem::getInstancia()->excluir(codigo)) {
        erro = "Erro: viagem nao localizada.";
        return false;
    }

    return true;
}
