#ifndef CIAVIAGEM_HPP_INCLUDED
#define CIAVIAGEM_HPP_INCLUDED

#include "../interfaces/iaviagem.hpp"
#include "../interfaces/isviagem.hpp"

// Declaração de classe controladora.

/**
 * @class CntrIAViagem
 * @brief Implementação da apresentação de gerenciamento de viagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class CntrIAViagem:public IAViagem {
    private:
        ISViagem *cntrISViagem; // Referência para servidor.
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
