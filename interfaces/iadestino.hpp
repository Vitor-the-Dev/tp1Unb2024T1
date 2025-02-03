#ifndef IADESTINO_HPP_INCLUDED
#define IADESTINO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isdestino.hpp"

// Declara��o de interface da camada de apresenta��o.

/**
 * @class IADestino
 * @brief Interface para a apresenta��o de gerenciamento de destinos.
 * @author Pedro Afonso Cust�dio de Lima - 232011350
 */
class IADestino {
    public:
        virtual bool criar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual void setCntrISDestino(ISDestino*) = 0; // M�todo para estabelecer liga��o (link) com a controladora na camada de servi�o.
        virtual ~IADestino(){} // M�todo destrutor virtual.
};

#endif // IADESTINO_HPP_INCLUDED
