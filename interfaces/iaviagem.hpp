#ifndef IAVIAGEM_HPP_INCLUDED
#define IAVIAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isviagem.hpp"

// Declaração de interface da camada de apresentação.

/**
 * @class IAViagem
 * @brief Interface para a apresentação de gerenciamento de viagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class IAViagem {
    public:
        virtual bool criar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir() = 0; // Método por meio do qual é solicitado o serviço.
        virtual void setCntrISViagem(ISViagem*) = 0; // Método para estabelecer ligação (link) com a controladora na camada de serviço.
        virtual ~IAViagem(){} // Método destrutor virtual.
};

#endif // IAVIAGEM_HPP_INCLUDED
