#ifndef CIACONTA_HPP_INCLUDED
#define CIACONTA_HPP_INCLUDED

#include "../interfaces/iaconta.hpp"
#include "../interfaces/isconta.hpp"

using namespace std;

// Declaração de classe controladora.

class CntrIAConta:public IAConta {
    private:
        ISConta *cntrISConta; // Referência para servidor.
    public:
        bool criar(Codigo*);
        bool ler(Codigo*);
        bool atualizar(Codigo*);
        bool excluir(Codigo*);
        void setCntrISConta(ISConta*);
};

void inline CntrIAConta::setCntrISConta(ISConta *cntrISConta){
        this->cntrISConta = cntrISConta;
}

#endif // CIACONTA_HPP_INCLUDED
