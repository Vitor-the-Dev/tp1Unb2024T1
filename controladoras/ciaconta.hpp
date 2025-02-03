#ifndef CIACONTA_HPP_INCLUDED
#define CIACONTA_HPP_INCLUDED

#include "../interfaces/iaconta.hpp"
#include "../interfaces/isconta.hpp"

// Declaração de classe controladora.

/**
 * @class CntrIAConta
 * @brief Implementação da apresentação de gerenciamento de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class CntrIAConta:public IAConta {
    private:
        ISConta *cntrISConta; // Referência para servidor.
    public:
        bool criar(Codigo*);
        bool listar();
        bool ler(Codigo*);
        bool atualizar(Codigo*);
        bool excluir(Codigo*);
        bool listarViagensPorConta(Codigo*) override;
        bool adicionarViagemParaConta(Codigo*) override;
        void setCntrISConta(ISConta*);
};

void inline CntrIAConta::setCntrISConta(ISConta *cntrISConta){
        this->cntrISConta = cntrISConta;
}

#endif // CIACONTA_HPP_INCLUDED
