#ifndef IACONTA_HPP_INCLUDED
#define IACONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../entidades/viagem.hpp"
#include "../interfaces/isconta.hpp"

// Declara��o de interface da camada de apresenta��o.

/**
 * @class IAConta
 * @brief Interface para a apresenta��o de gerenciamento de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class IAConta {
    public:
        virtual bool criar(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual void setCntrISConta(ISConta*) = 0; // M�todo para estabelecer liga��o (link) com a controladora na camada de servi�o.
        virtual bool listarViagensPorConta(Codigo*) = 0;
        virtual bool adicionarViagemParaConta(Codigo*) = 0;
        virtual ~IAConta(){} // M�todo destrutor virtual.
};

#endif // IACONTA_HPP_INCLUDED
