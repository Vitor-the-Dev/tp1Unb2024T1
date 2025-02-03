#include "cisatividade.hpp"
#include "../containers/cnatividade.hpp"

/**
 * @brief Solicita criar uma nova atividade no contêiner.
 * @param atividade Referência para objeto Atividade a ser incluído.
 * @return true se a atividade foi incluída com sucesso,
 * @return false se já existir uma atividade com o mesmo código.
 */
bool CntrISAtividade::criar(const Atividade &atividade, std::string &erro){

    if (!ContainerAtividade::getInstancia()->criar(atividade)) {
        erro = "Erro: atividade duplicada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita listar as atividades no contêiner.
 * @param atividades Referência para objeto Atividade a ser listado.
 * @return true se as atividades foram listadas com sucesso,
 * @return false se não foram.
 */
bool CntrISAtividade::listar(std::list<Atividade> &atividades, std::string &erro){

    if (!ContainerAtividade::getInstancia()->listar(&atividades)) {
        erro = "Erro: nenhuma atividade localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita ler uma atividade no contêiner.
 * @param atividade Referência para objeto Atividade a ser lida.
 * @return true se a atividade foi lida com sucesso,
 * @return false se não foi.
 */
bool CntrISAtividade::ler(Atividade &atividade, std::string &erro){

    if (!ContainerAtividade::getInstancia()->ler(&atividade)) {
        erro = "Erro: atividade não localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita atualizar uma atividade no contêiner.
 * @param atividade Referência para objeto Atividade a ser atualizado.
 * @return true se a atividade foi atualizada com sucesso,
 * @return false se não foi.
 */
bool CntrISAtividade::atualizar(const Atividade &atividade, std::string &erro){

    if (!ContainerAtividade::getInstancia()->atualizar(atividade)) {
        erro = "Erro: atividade não localizada.";
        return false;
    }

    return true;
}

/**
 * @brief Solicita excluir uma atividade no contêiner.
 * @param codigo Referência para objeto Atividade a ser excluído.
 * @return true se a atividade foi excluída com sucesso,
 * @return false se não foi.
 */
bool CntrISAtividade::excluir(const Codigo &codigo, std::string &erro){

    if (!ContainerAtividade::getInstancia()->excluir(codigo)) {
        erro = "Erro: atividade não localizada.";
        return false;
    }

    return true;
}
