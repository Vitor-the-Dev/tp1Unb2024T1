#ifndef IAHOSPEDAGEM_HPP_INCLUDED
#define IAHOSPEDAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/ishospedagem.hpp"

// Declara��o de interface da camada de apresenta��o.

/**
 * @class IAHospedagem
 * @brief Interface para a apresenta��o de gerenciamento de hospedagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class IAHospedagem {
    public:
        virtual bool criar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual void setCntrISHospedagem(ISHospedagem*) = 0; // M�todo para estabelecer liga��o (link) com a controladora na camada de servi�o.
        virtual ~IAHospedagem(){} // M�todo destrutor virtual.
};

#endif // IAHOSPEDAGEM_HPP_INCLUDED
