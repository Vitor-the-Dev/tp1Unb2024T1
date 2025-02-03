#ifndef ISATIVIDADE_HPP_INCLUDED
#define ISATIVIDADE_HPP_INCLUDED

#include <list>
#include "../dominios/codigo.hpp"
#include "../entidades/atividade.hpp"

/**
 * @class ISAtividade
 * @brief Interface para os servi�os de gerenciamento de atividades.
 * @author Luiz Felippe En�as - 170168221
 */
class ISAtividade {
    public:
        virtual bool criar(const Atividade&, std::string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar(std::list<Atividade>&, std::string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler(Atividade&, std::string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar(const Atividade&, std::string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir(const Codigo&, std::string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual ~ISAtividade(){} // M�todo destrutor virtual.
};

#endif // ISATIVIDADE_HPP_INCLUDED
