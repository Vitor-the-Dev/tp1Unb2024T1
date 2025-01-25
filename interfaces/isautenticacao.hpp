#ifndef ISAUTENTICACAO_HPP_INCLUDED
#define ISAUTENTICACAO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"

using namespace std;

// Declaração de interface da camada de serviço.

class ISAutenticacao {
    public:
        virtual bool autenticar(const Codigo&, const Senha&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual ~ISAutenticacao(){} // Método destrutor virtual.
};

#endif // ISAUTENTICACAO_HPP_INCLUDED
