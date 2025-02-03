#ifndef CIAATIVIDADE_HPP_INCLUDED
#define CIAATIVIDADE_HPP_INCLUDED

#include "../interfaces/iaatividade.hpp"
#include "../interfaces/isatividade.hpp"

// Declaração de classe controladora.

/**
 * @class CntrIAAtividade
 * @brief Implementação da apresentação de gerenciamento de atividades.
 * @author Luiz Felippe Enéas - 170168221
 */
class CntrIAAtividade: public IAAtividade {
    private:
        ISAtividade *cntrISAtividade; // Referência para servidor.
    public:
        bool criar();
        bool listar();
        bool ler();
        bool atualizar();
        bool excluir();
        void setCntrISAtividade(ISAtividade*);
};

void inline CntrIAAtividade::setCntrISAtividade(ISAtividade *cntrISAtividade){
        this->cntrISAtividade = cntrISAtividade;
}

#endif // CIAATIVIDADE_HPP_INCLUDED
