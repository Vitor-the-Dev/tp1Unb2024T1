#ifndef IAATIVIDADE_HPP_INCLUDED
#define IAATIVIDADE_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isatividade.hpp"

// Declara��o de interface da camada de apresenta��o.

/**
 * @class IAAtividade
 * @brief Interface para a apresenta��o de gerenciamento de atividades.
 * @author Luiz Felippe En�as - 170168221
 */
class IAAtividade {
    public:
        virtual bool criar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir() = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual void setCntrISAtividade(ISAtividade*) = 0; // M�todo para estabelecer liga��o (link) com a controladora na camada de servi�o.
        virtual ~IAAtividade(){} // M�todo destrutor virtual.
};

#endif // IAATIVIDADE_HPP_INCLUDED
