#ifndef ISDESTINO_HPP_INCLUDED
#define ISDESTINO_HPP_INCLUDED

#include <list>
#include "../dominios/codigo.hpp"
#include "../entidades/destino.hpp"

/**
 * @class ISDestino
 * @brief Interface para os servi�os de gerenciamento de destinos.
 * @author Pedro Afonso Cust�dio de Lima - 232011350
 */
class ISDestino {
    public:
        virtual bool criar(const Destino&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar(std::list<Destino>&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler(Destino&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar(const Destino&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir(const Codigo&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual ~ISDestino(){} // M�todo destrutor virtual.
};

#endif // ISDESTINO_HPP_INCLUDED
