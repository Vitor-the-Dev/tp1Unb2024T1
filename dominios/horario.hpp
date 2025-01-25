#ifndef HORARIO_HPP_INCLUDED
#define HORARIO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padr�o para representa��o do Hor�rio.
///
/// Regras de formato:
///
/// - Valor v�lido caso formato HH:MM. HH pode ser 00 a 23. MM pode ser 00 a 59.
///
/// Autor: Vitor Carlos Fernandes - 190142332
///

//Declara��o de classe
class Horario {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            void setValor(string); //M�todo para atribuir valor.
            string getValor() const; // M�todo para recuperar valor.
};

///
/// Retorna valor do Hor�rio.
///
/// @return valor do Hor�rio.
///

// Implementa��o de m�todo inline.
inline string Horario::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // HORARIO_HPP_INCLUDED
