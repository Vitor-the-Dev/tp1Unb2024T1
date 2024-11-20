#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Dinheiro {
    private:
            float valor; //Atributo para armazenar valor.
            void validar(float); //M�todo para validar valor.
    public:
            void setValor(float); //M�todo para atribuir valor.
            float getValor() const; // M�todo para recuperar valor.
};

inline float Dinheiro::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DINHEIRO_HPP_INCLUDED
