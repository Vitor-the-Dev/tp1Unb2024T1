#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padr�o para representa��o do C�digo.
///
/// Regras de formato:
///
/// - Valor v�lido caso tenha seis caracteres. Cada caracter pode ser letra (A - Z ou a - z) ou d�gito (0 - 9).
///
/// Autor: Davi Cesar Silva Borges - 190105054
///

//Declara��o de classe
class Codigo {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            void setValor(string); //M�todo para atribuir valor.
            string getValor() const; // M�todo para recuperar valor.
};

///
/// Retorna valor do C�digo.
///
/// @return valor do C�digo.
///

// Implementa��o de m�todo inline.
inline string Codigo::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // CODIGO_HPP_INCLUDED
