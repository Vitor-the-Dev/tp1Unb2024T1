#ifndef CIACONTROLE_HPP_INCLUDED
#define CIACONTROLE_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/iaautenticacao.hpp"
#include "../interfaces/iaconta.hpp"
#include "../interfaces/iaviagem.hpp"
#include "../interfaces/iadestino.hpp"
#include "../interfaces/iahospedagem.hpp"
#include "../interfaces/iaatividade.hpp"

/**
 * @class CntrApresentacaoControle
 * @brief Classe responsável por controlar a aplicação.
 * @author Luiz Felippe Enéas - 170168221
 */
class CntrApresentacaoControle{
    private:
        Codigo codigo;
        IAAutenticacao *cntrIAAutenticacao;
        IAConta *cntrIAConta;
        IAViagem *cntrIAViagem;
        IADestino *cntrIADestino;
        IAHospedagem *cntrIAHospedagem;
        IAAtividade *cntrIAAtividade;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IAAutenticacao*);
        void setCntrApresentacaoConta(IAConta*);
        void setCntrApresentacaoViagem(IAViagem*);
        void setCntrApresentacaoDestino(IADestino*);
        void setCntrApresentacaoHospedagem(IAHospedagem*);
        void setCntrApresentacaoAtividade(IAAtividade*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IAAutenticacao *cntrIAAutenticacao){
    this->cntrIAAutenticacao = cntrIAAutenticacao;
}

inline void CntrApresentacaoControle::setCntrApresentacaoConta(IAConta *cntrIAConta){
    this->cntrIAConta = cntrIAConta;
}

inline void CntrApresentacaoControle::setCntrApresentacaoViagem(IAViagem *cntrIAViagem){
    this->cntrIAViagem = cntrIAViagem;
}

inline void CntrApresentacaoControle::setCntrApresentacaoDestino(IADestino *cntrIADestino){
    this->cntrIADestino = cntrIADestino;
}

inline void CntrApresentacaoControle::setCntrApresentacaoHospedagem(IAHospedagem *cntrIAHospedagem){
    this->cntrIAHospedagem = cntrIAHospedagem;
}

inline void CntrApresentacaoControle::setCntrApresentacaoAtividade(IAAtividade *cntrIAAtividade){
    this->cntrIAAtividade = cntrIAAtividade;
}

#endif // CIACONTROLE_HPP_INCLUDED
