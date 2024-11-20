#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Dinheiro {
    private:
            float valor; //Atributo para armazenar valor.
            void validar(float); //Método para validar valor.
    public:
            void setValor(float); //Método para atribuir valor.
            float getValor() const; // Método para recuperar valor.
};

inline float Dinheiro::getValor() const { //Implementação de método
    return valor;
}

#endif // DINHEIRO_HPP_INCLUDED
