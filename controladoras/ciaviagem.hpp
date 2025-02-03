#ifndef CIAVIAGEM_HPP_INCLUDED
#define CIAVIAGEM_HPP_INCLUDED

#include "../interfaces/iaviagem.hpp"
#include "../interfaces/isviagem.hpp"

// Declara��o de classe controladora.

/**
 * @class CntrIAViagem
 * @brief Implementa��o da apresenta��o de gerenciamento de viagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class CntrIAViagem:public IAViagem {
    private:
        ISViagem *cntrISViagem; // Refer�ncia para servidor.
    public:
        bool criar();
        bool listar();
        bool ler();
        bool atualizar();
        bool excluir();
        void setCntrISViagem(ISViagem*);
};

void inline CntrIAViagem::setCntrISViagem(ISViagem *cntrISViagem){
        this->cntrISViagem = cntrISViagem;
}

#endif // CIAVIAGEM_HPP_INCLUDED
