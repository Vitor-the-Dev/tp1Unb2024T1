#ifndef ISVIAGEM_HPP_INCLUDED
#define ISVIAGEM_HPP_INCLUDED

#include <list>
#include "../dominios/codigo.hpp"
#include "../entidades/viagem.hpp"

/**
 * @class ISViagem
 * @brief Interface para os servi�os de gerenciamento de viagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class ISViagem {
    public:
        virtual bool criar(const Viagem&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar(std::list<Viagem>&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler(Viagem&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar(const Viagem&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir(const Codigo&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual ~ISViagem(){} // M�todo destrutor virtual.
};


#endif // ISVIAGEM_HPP_INCLUDED
