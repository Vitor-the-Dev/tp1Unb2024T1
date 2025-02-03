#include "cishospedagem.hpp"
#include "../containers/cnhospedagem.hpp"

/**
 * @brief Solicita criar uma nova hospedagem no contêiner.
 * @param hospedagem Referência para objeto Hospedagem a ser incluído.
 * @return true se a hospedagem foi incluída com sucesso,
 * @return false se já existir uma hospedagem com o mesmo código.
 */
bool CntrISHospedagem::criar(const Hospedagem &hospedagem, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->criar(hospedagem)) {
        erro = "Erro: hospedagem duplicada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita listar as hospedagens no contêiner.
 * @param hospedagens Referência para lista de Hospedagem a ser listada.
 * @return true se as hospedagens foram listadas com sucesso,
 * @return false se não foram.
 */
bool CntrISHospedagem::listar(std::list<Hospedagem> &hospedagens, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->listar(&hospedagens)) {
        erro = "Erro: nenhuma hospedagem localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita ler uma hospedagem no contêiner.
 * @param hospedagem Referência para objeto Hospedagem a ser lido.
 * @return true se a hospedagem foi lida com sucesso,
 * @return false se não foi.
 */
bool CntrISHospedagem::ler(Hospedagem &hospedagem, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->ler(&hospedagem)) {
        erro = "Erro: hospedagem nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita atualizar uma hospedagem no contêiner.
 * @param hospedagem Referência para objeto Hospedagem a ser atualizado.
 * @return true se a hospedagem foi atualizada com sucesso,
 * @return false se não foi.
 */
bool CntrISHospedagem::atualizar(const Hospedagem &hospedagem, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->atualizar(hospedagem)) {
        erro = "Erro: hospedagem nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita excluir uma hospedagem no contêiner.
 * @param codigo Referência para objeto Hospedagem a ser excluído.
 * @return true se a hospedagem foi excluída com sucesso,
 * @return false se não foi.
 */
bool CntrISHospedagem::excluir(const Codigo &codigo, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->excluir(codigo)) {
        erro = "Erro: hospedagem nao localizada.";
        return false;
    }

    return true;
}
