#ifndef ISHOSPEDAGEM_HPP_INCLUDED
#define ISHOSPEDAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

// Declaração da interface da camada de serviço.

class ISHospedagem {
    public:
        virtual bool novaHospedagem(const Codigo&, const Nome&, const Dinheiro&, const Avaliacao&) = 0; // Método para registrar uma nova hospedagem.
        virtual ~ISHospedagem(){} // Método destrutor virtual.
};

#endif // ISHOSPEDAGEM_HPP_INCLUDED
