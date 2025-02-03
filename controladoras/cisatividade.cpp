#include "cisatividade.hpp"
#include "../containers/cnatividade.hpp"

/**
 * @brief Solicita criar uma nova atividade no cont�iner.
 * @param atividade Refer�ncia para objeto Atividade a ser inclu�do.
 * @return true se a atividade foi inclu�da com sucesso,
 * @return false se j� existir uma atividade com o mesmo c�digo.
 */
bool CntrISAtividade::criar(const Atividade &atividade, std::string &erro){

    if (!ContainerAtividade::getInstancia()->criar(atividade)) {
        erro = "Erro: atividade duplicada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita listar as atividades no cont�iner.
 * @param atividades Refer�ncia para objeto Atividade a ser listado.
 * @return true se as atividades foram listadas com sucesso,
 * @return false se n�o foram.
 */
bool CntrISAtividade::listar(std::list<Atividade> &atividades, std::string &erro){

    if (!ContainerAtividade::getInstancia()->listar(&atividades)) {
        erro = "Erro: nenhuma atividade localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita ler uma atividade no cont�iner.
 * @param atividade Refer�ncia para objeto Atividade a ser lida.
 * @return true se a atividade foi lida com sucesso,
 * @return false se n�o foi.
 */
bool CntrISAtividade::ler(Atividade &atividade, std::string &erro){

    if (!ContainerAtividade::getInstancia()->ler(&atividade)) {
        erro = "Erro: atividade n�o localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita atualizar uma atividade no cont�iner.
 * @param atividade Refer�ncia para objeto Atividade a ser atualizado.
 * @return true se a atividade foi atualizada com sucesso,
 * @return false se n�o foi.
 */
bool CntrISAtividade::atualizar(const Atividade &atividade, std::string &erro){

    if (!ContainerAtividade::getInstancia()->atualizar(atividade)) {
        erro = "Erro: atividade n�o localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita excluir uma atividade no cont�iner.
 * @param codigo Refer�ncia para objeto Atividade a ser exclu�do.
 * @return true se a atividade foi exclu�da com sucesso,
 * @return false se n�o foi.
 */
bool CntrISAtividade::excluir(const Codigo &codigo, std::string &erro){

    if (!ContainerAtividade::getInstancia()->excluir(codigo)) {
        erro = "Erro: atividade n�o localizada.";
        return false;
    }

    return true;
}
