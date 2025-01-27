#ifndef ISDESTINO_HPP_INCLUDED
#define ISDESTINO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

// Declaração de interface da camada de serviço.

class ISDestino {
    public:
        virtual bool novoDestino(const Codigo&, const Nome&, const Data&, const Data&, const Avaliacao&) = 0; // Solicita o serviço.
        virtual ~ISDestino(){} // Destrutor virtual.
};

#endif // ISDESTINO_HPP_INCLUDED