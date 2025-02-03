#ifndef CIADESTINO_HPP_INCLUDED
#define CIADESTINO_HPP_INCLUDED

#include "../interfaces/iadestino.hpp"
#include "../interfaces/isdestino.hpp"

// Declaração de classe controladora.

/**
 * @class CntrIADestino
 * @brief Implementação da apresentação de gerenciamento de destinos.
 * @author Pedro Afonso Custódio de Lima - 232011350
 */
class CntrIADestino: public IADestino {
    private:
        ISDestino *cntrISDestino; // Referência para servidor.
    public:
        bool criar();
        bool listar();
        bool ler();
        bool atualizar();
        bool excluir();
        void setCntrISDestino(ISDestino*);
};

void inline CntrIADestino::setCntrISDestino(ISDestino *cntrISDestino){
        this->cntrISDestino = cntrISDestino;
}

#endif // CIADESTINO_HPP_INCLUDED
