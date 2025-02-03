#ifndef IAAUTENTICACAO_HPP_INCLUDED
#define IAAUTENTICACAO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isautenticacao.hpp"

using namespace std;

// Declara��o de interface da camada de apresenta��o.

/**
 * @class IAAutenticacao
 * @brief Interface para a apresenta��o de autencicacao de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class IAAutenticacao {
    public:
        virtual bool autenticar(Codigo*) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual void setCntrISAutenticacao(ISAutenticacao*) = 0; // M�todo para estabelecer liga��o (link) com a controladora na camada de servi�o.
        virtual ~IAAutenticacao(){} // M�todo destrutor virtual.
};

#endif // IAAUTENTICACAO_HPP_INCLUDED
