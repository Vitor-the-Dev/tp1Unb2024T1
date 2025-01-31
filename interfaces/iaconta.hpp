#ifndef IACONTA_HPP_INCLUDED
#define IACONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isconta.hpp"

using namespace std;

// Declaração de interface da camada de apresentação.

class IAConta {
    public:
        virtual bool criar(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual void setCntrISConta(ISConta*) = 0; // Método para estabelecer ligação (link) com a controladora na camada de serviço.
        virtual ~IAConta(){} // Método destrutor virtual.
};

#endif // IACONTA_HPP_INCLUDED
