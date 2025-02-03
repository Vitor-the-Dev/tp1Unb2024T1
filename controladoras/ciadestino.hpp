#ifndef CIADESTINO_HPP_INCLUDED
#define CIADESTINO_HPP_INCLUDED

#include "../interfaces/iadestino.hpp"
#include "../interfaces/isdestino.hpp"

// Declara��o de classe controladora.

/**
 * @class CntrIADestino
 * @brief Implementa��o da apresenta��o de gerenciamento de destinos.
 * @author Pedro Afonso Cust�dio de Lima - 232011350
 */
class CntrIADestino: public IADestino {
    private:
        ISDestino *cntrISDestino; // Refer�ncia para servidor.
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
