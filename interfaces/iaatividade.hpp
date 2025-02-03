#ifndef IAATIVIDADE_HPP_INCLUDED
#define IAATIVIDADE_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isatividade.hpp"

// Declaração de interface da camada de apresentação.

/**
 * @class IAAtividade
 * @brief Interface para a apresentação de gerenciamento de atividades.
 * @author Luiz Felippe Enéas - 170168221
 */
class IAAtividade {
    public:
        virtual bool criar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar() = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir() = 0; // Método por meio do qual é solicitado o serviço.
        virtual void setCntrISAtividade(ISAtividade*) = 0; // Método para estabelecer ligação (link) com a controladora na camada de serviço.
        virtual ~IAAtividade(){} // Método destrutor virtual.
};

#endif // IAATIVIDADE_HPP_INCLUDED
