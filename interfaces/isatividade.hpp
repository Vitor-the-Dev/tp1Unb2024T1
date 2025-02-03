#ifndef ISATIVIDADE_HPP_INCLUDED
#define ISATIVIDADE_HPP_INCLUDED

#include <list>
#include "../dominios/codigo.hpp"
#include "../entidades/atividade.hpp"

/**
 * @class ISAtividade
 * @brief Interface para os serviços de gerenciamento de atividades.
 * @author Luiz Felippe Enéas - 170168221
 */
class ISAtividade {
    public:
        virtual bool criar(const Atividade&, std::string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar(std::list<Atividade>&, std::string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler(Atividade&, std::string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar(const Atividade&, std::string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir(const Codigo&, std::string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual ~ISAtividade(){} // Método destrutor virtual.
};

#endif // ISATIVIDADE_HPP_INCLUDED
