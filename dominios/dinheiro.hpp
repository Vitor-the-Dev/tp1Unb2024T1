#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padrão para representação do Dinheiro.
///
/// Regras de formato:
///
/// - Valor válido caso <u>maior</u> ou igual a 0 e <u>menor</u> ou igual a 200.000,00.
///
/// Autor: Pedro Afonso Custódio de Lima - 232011350
///

//Declaração de classe
class Dinheiro {
    private:
            float valor; //Atributo para armazenar valor.
            void validar(float); //Método para validar valor.
    public:
            void setValor(float); //Método para atribuir valor.
            float getValor() const; // Método para recuperar valor.
};

///
/// Retorna valor do Dinheiro.
///
/// @return valor do Dinheiro.
///

// Implementação de método inline.
inline float Dinheiro::getValor() const { //Implementação de método
    return valor;
}

#endif // DINHEIRO_HPP_INCLUDED
