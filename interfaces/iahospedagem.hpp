#ifndef IAHOSPEDAGEM_HPP_INCLUDED
#define IAHOSPEDAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/ishospedagem.hpp"

using namespace std;

// Declaração da interface da camada de apresentação.

class IAHospedagem {
    public:
        virtual bool registrarHospedagem(Codigo*) = 0; // Método para solicitar o serviço de registrar hospedagem.
        virtual void setCntrISHospedagem(ISHospedagem*) = 0; // Método para estabelecer a ligação com a controladora na camada de serviço.
        virtual ~IAHospedagem(){} // Método destrutor virtual.
};

#endif // IAHOSPEDAGEM_HPP_INCLUDED
