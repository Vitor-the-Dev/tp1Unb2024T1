#ifndef IACONTA_HPP_INCLUDED
#define IACONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../entidades/viagem.hpp"
#include "../interfaces/isconta.hpp"

// Declaração de interface da camada de apresentação.

/**
 * @class IAConta
 * @brief Interface para a apresentação de gerenciamento de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class IAConta {
    public:
        virtual bool criar(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir(Codigo*) = 0; // Método por meio do qual é solicitado o serviço.
        virtual void setCntrISConta(ISConta*) = 0; // Método para estabelecer ligação (link) com a controladora na camada de serviço.
        virtual bool listarViagensPorConta(Codigo*) = 0;
        virtual bool adicionarViagemParaConta(Codigo*) = 0;
        virtual ~IAConta(){} // Método destrutor virtual.
};

#endif // IACONTA_HPP_INCLUDED
