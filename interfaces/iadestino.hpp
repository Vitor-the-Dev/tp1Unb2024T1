#ifndef IADESTINO_HPP_INCLUDED
#define IADESTINO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "./isdestino.hpp"

using namespace std;

// Declaração de interface da camada de apresentação.

class IADestino {
    public:
        virtual bool registrarDestino(Codigo*) = 0; // Solicita o serviço para registrar destino.
        virtual void setCntrISDestino(ISDestino*) = 0; // Estabelece ligação com a controladora de serviço.
        virtual ~IADestino(){} // Destrutor virtual.
};

#endif // IADESTINO_HPP_INCLUDED
