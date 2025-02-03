#include "cishospedagem.hpp"
#include "../containers/cnhospedagem.hpp"

/**
 * @brief Solicita criar uma nova hospedagem no cont�iner.
 * @param hospedagem Refer�ncia para objeto Hospedagem a ser inclu�do.
 * @return true se a hospedagem foi inclu�da com sucesso,
 * @return false se j� existir uma hospedagem com o mesmo c�digo.
 */
bool CntrISHospedagem::criar(const Hospedagem &hospedagem, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->criar(hospedagem)) {
        erro = "Erro: hospedagem duplicada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita listar as hospedagens no cont�iner.
 * @param hospedagens Refer�ncia para lista de Hospedagem a ser listada.
 * @return true se as hospedagens foram listadas com sucesso,
 * @return false se n�o foram.
 */
bool CntrISHospedagem::listar(std::list<Hospedagem> &hospedagens, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->listar(&hospedagens)) {
        erro = "Erro: nenhuma hospedagem localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita ler uma hospedagem no cont�iner.
 * @param hospedagem Refer�ncia para objeto Hospedagem a ser lido.
 * @return true se a hospedagem foi lida com sucesso,
 * @return false se n�o foi.
 */
bool CntrISHospedagem::ler(Hospedagem &hospedagem, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->ler(&hospedagem)) {
        erro = "Erro: hospedagem nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita atualizar uma hospedagem no cont�iner.
 * @param hospedagem Refer�ncia para objeto Hospedagem a ser atualizado.
 * @return true se a hospedagem foi atualizada com sucesso,
 * @return false se n�o foi.
 */
bool CntrISHospedagem::atualizar(const Hospedagem &hospedagem, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->atualizar(hospedagem)) {
        erro = "Erro: hospedagem nao localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita excluir uma hospedagem no cont�iner.
 * @param codigo Refer�ncia para objeto Hospedagem a ser exclu�do.
 * @return true se a hospedagem foi exclu�da com sucesso,
 * @return false se n�o foi.
 */
bool CntrISHospedagem::excluir(const Codigo &codigo, std::string &erro){

    if (!ContainerHospedagem::getInstancia()->excluir(codigo)) {
        erro = "Erro: hospedagem nao localizada.";
        return false;
    }

    return true;
}
