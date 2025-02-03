#ifndef IAAUTENTICACAO_HPP_INCLUDED
#define IAAUTENTICACAO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isautenticacao.hpp"

using namespace std;

// Declaração de interface da camada de apresentação.

/**
 * @class IAAutenticacao
 * @brief Interface para a apresentação de autencicacao de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class IAAutenticacao {
    public:
        virtual bool autenticar(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual void setCntrISAutenticacao(ISAutenticacao*) = 0; // Método para estabelecer ligação (link) com a controladora na camada de serviço.
        virtual ~IAAutenticacao(){} // Método destrutor virtual.
};

#endif // IAAUTENTICACAO_HPP_INCLUDED
