#ifndef CIAATIVIDADE_HPP_INCLUDED
#define CIAATIVIDADE_HPP_INCLUDED

#include "../interfaces/iaatividade.hpp"
#include "../interfaces/isatividade.hpp"

// Declara��o de classe controladora.

/**
 * @class CntrIAAtividade
 * @brief Implementa��o da apresenta��o de gerenciamento de atividades.
 * @author Luiz Felippe En�as - 170168221
 */
class CntrIAAtividade: public IAAtividade {
    private:
        ISAtividade *cntrISAtividade; // Refer�ncia para servidor.
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
