#ifndef CIAAUTENTICACAO_HPP_INCLUDED
#define CIAAUTENTICACAO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/iaautenticacao.hpp"
#include "../interfaces/isautenticacao.hpp"

using namespace std;

// Declaração de classe controladora.

class CntrIAAutenticacao:public IAAutenticacao {
    private:
        ISAutenticacao *cntrISAutenticacao; // Referência para servidor.
    public:
        bool autenticar(Codigo*);
        void setCntrISAutenticacao(ISAutenticacao*);
};

void inline CntrIAAutenticacao::setCntrISAutenticacao(ISAutenticacao *cntrISAutenticacao){
        this->cntrISAutenticacao = cntrISAutenticacao;
}

#endif // CIAAUTENTICACAO_HPP_INCLUDED
