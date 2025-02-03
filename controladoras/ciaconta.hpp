#ifndef CIACONTA_HPP_INCLUDED
#define CIACONTA_HPP_INCLUDED

#include "../interfaces/iaconta.hpp"
#include "../interfaces/isconta.hpp"

// Declara��o de classe controladora.

/**
 * @class CntrIAConta
 * @brief Implementa��o da apresenta��o de gerenciamento de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class CntrIAConta:public IAConta {
    private:
        ISConta *cntrISConta; // Refer�ncia para servidor.
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
