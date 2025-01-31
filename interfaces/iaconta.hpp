#ifndef IACONTA_HPP_INCLUDED
#define IACONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isconta.hpp"

using namespace std;

// Declara��o de interface da camada de apresenta��o.

class IAConta {
    public:
        virtual bool criar(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual void setCntrISConta(ISConta*) = 0; // M�todo para estabelecer liga��o (link) com a controladora na camada de servi�o.
        virtual ~IAConta(){} // M�todo destrutor virtual.
};

#endif // IACONTA_HPP_INCLUDED
