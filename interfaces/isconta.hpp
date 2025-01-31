#ifndef ISCONTA_HPP_INCLUDED
#define ISCONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../entidades/conta.hpp"

using namespace std;

// Declara��o de interface da camada de servi�o.

class ISConta {
    public:
        virtual bool criar(const Conta&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler(Conta&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar(const Conta&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir(const Codigo&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual ~ISConta(){} // M�todo destrutor virtual.
};

#endif // ISCONTA_HPP_INCLUDED
