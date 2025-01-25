#ifndef ISAUTENTICACAO_HPP_INCLUDED
#define ISAUTENTICACAO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"

using namespace std;

// Declara��o de interface da camada de servi�o.

class ISAutenticacao {
    public:
        virtual bool autenticar(const Codigo&, const Senha&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual ~ISAutenticacao(){} // M�todo destrutor virtual.
};

#endif // ISAUTENTICACAO_HPP_INCLUDED
