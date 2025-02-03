#ifndef IADESTINO_HPP_INCLUDED
#define IADESTINO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isdestino.hpp"

// Declaração de interface da camada de apresentação.

/**
 * @class IADestino
 * @brief Interface para a apresentação de gerenciamento de destinos.
 * @author Pedro Afonso Custódio de Lima - 232011350
 */
class IADestino {
    public:
        virtual bool criar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir() = 0; // Método por meio do qual é solicitado o serviço.
        virtual void setCntrISDestino(ISDestino*) = 0; // Método para estabelecer ligação (link) com a controladora na camada de serviço.
        virtual ~IADestino(){} // Método destrutor virtual.
};

#endif // IADESTINO_HPP_INCLUDED
