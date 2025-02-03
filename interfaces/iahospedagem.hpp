#ifndef IAHOSPEDAGEM_HPP_INCLUDED
#define IAHOSPEDAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/ishospedagem.hpp"

// Declaração de interface da camada de apresentação.

/**
 * @class IAHospedagem
 * @brief Interface para a apresentação de gerenciamento de hospedagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class IAHospedagem {
    public:
        virtual bool criar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir() = 0; // Método por meio do qual é solicitado o serviço.
        virtual void setCntrISHospedagem(ISHospedagem*) = 0; // Método para estabelecer ligação (link) com a controladora na camada de serviço.
        virtual ~IAHospedagem(){} // Método destrutor virtual.
};

#endif // IAHOSPEDAGEM_HPP_INCLUDED
