#ifndef CIACONTROLE_HPP_INCLUDED
#define CIACONTROLE_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/iaautenticacao.hpp"
#include "../interfaces/iaconta.hpp"

class CntrApresentacaoControle{
    private:
        Codigo codigo;
        IAAutenticacao *cntrIAAutenticacao;
        IAConta *CntrIAConta;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IAAutenticacao*);
        void setCntrApresentacaoConta(IAConta*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IAAutenticacao *cntrIAAutenticacao){
    this->cntrIAAutenticacao = cntrIAAutenticacao;
}

inline void CntrApresentacaoControle::setCntrApresentacaoConta(IAConta *CntrIAConta){
    this->CntrIAConta = CntrIAConta;
}

#endif // CIACONTROLE_HPP_INCLUDED
