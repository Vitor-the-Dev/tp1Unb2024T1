#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padr�o para representa��o do Dinheiro.
///
/// Regras de formato:
///
/// - Valor v�lido caso <u>maior</u> ou igual a 0 e <u>menor</u> ou igual a 200.000,00.
///
/// Autor: Pedro Afonso Cust�dio de Lima - 232011350
///

//Declara��o de classe
class Dinheiro {
    private:
            float valor; //Atributo para armazenar valor.
            void validar(float); //M�todo para validar valor.
    public:
            void setValor(float); //M�todo para atribuir valor.
            float getValor() const; // M�todo para recuperar valor.
};

///
/// Retorna valor do Dinheiro.
///
/// @return valor do Dinheiro.
///

// Implementa��o de m�todo inline.
inline float Dinheiro::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DINHEIRO_HPP_INCLUDED
