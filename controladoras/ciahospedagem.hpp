#ifndef CIAHOSPEDAGEM_HPP_INCLUDED
#define CIAHOSPEDAGEM_HPP_INCLUDED

#include "../interfaces/iahospedagem.hpp"
#include "../interfaces/ishospedagem.hpp"

// Declaração de classe controladora.

/**
 * @class CntrIAHospedagem
 * @brief Implementação da apresentação de gerenciamento de hospedagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class CntrIAHospedagem: public IAHospedagem {
    private:
        ISHospedagem *cntrISHospedagem; // Referência para servidor.
    public:
        bool criar();
        bool listar();
        bool ler();
        bool atualizar();
        bool excluir();
        void setCntrISHospedagem(ISHospedagem*);
};

void inline CntrIAHospedagem::setCntrISHospedagem(ISHospedagem *cntrISHospedagem){
        this->cntrISHospedagem = cntrISHospedagem;
}

#endif // CIAHOSPEDAGEM_HPP_INCLUDED
