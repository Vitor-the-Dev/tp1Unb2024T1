#ifndef IAVIAGEM_HPP_INCLUDED
#define IAVIAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isviagem.hpp"

// Declara��o de interface da camada de apresenta��o.

/**
 * @class IAViagem
 * @brief Interface para a apresenta��o de gerenciamento de viagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class IAViagem {
    public:
        virtual bool criar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual void setCntrISViagem(ISViagem*) = 0; // M�todo para estabelecer liga��o (link) com a controladora na camada de servi�o.
        virtual ~IAViagem(){} // M�todo destrutor virtual.
};

#endif // IAVIAGEM_HPP_INCLUDED
