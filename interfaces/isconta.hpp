#ifndef ISCONTA_HPP_INCLUDED
#define ISCONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../entidades/conta.hpp"

using namespace std;

// Declaração de interface da camada de serviço.

class ISConta {
    public:
        virtual bool criar(const Conta&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler(Conta&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar(const Conta&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir(const Codigo&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual ~ISConta(){} // Método destrutor virtual.
};

#endif // ISCONTA_HPP_INCLUDED
