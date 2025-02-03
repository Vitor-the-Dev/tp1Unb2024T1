#ifndef CISATIVIDADE_HPP_INCLUDED
#define CISATIVIDADE_HPP_INCLUDED

#include "../interfaces/isatividade.hpp"

/**
 * @class CntrISAtividade
 * @brief Implementa��o dos servi�os de gerenciamento de atividades.
 * @author Luiz Felippe En�as - 170168221
 */
class CntrISAtividade: public ISAtividade {
    public:
        bool criar(const Atividade &atividade, std::string &erro) override;
        bool listar(std::list<Atividade> &atividades, std::string &erro) override;
        bool ler(Atividade &atividade, std::string &erro) override;
        bool atualizar(const Atividade &atividade, std::string &erro) override;
        bool excluir(const Codigo &codigo, std::string &erro) override;
};

#endif // CISATIVIDADE_HPP_INCLUDED
