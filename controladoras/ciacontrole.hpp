#ifndef CIACONTROLE_HPP_INCLUDED
#define CIACONTROLE_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/iaautenticacao.hpp"

class CntrApresentacaoControle{
    private:
        Codigo codigo;
        IAAutenticacao *cntrIAAutenticacao;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IAAutenticacao*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IAAutenticacao *cntrIAAutenticacao){
    this->cntrIAAutenticacao = cntrIAAutenticacao;
}

#endif // CIACONTROLE_HPP_INCLUDED
