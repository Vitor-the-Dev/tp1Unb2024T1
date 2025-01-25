#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padr�o para representa��o da Data.
///
/// Regras de formato:
///
/// - Valor v�lido caso tenha o formato DD-MM-AA. DD - 00 a 31, MM - 01 a 12, AA - 00 a 99. Leva em considera��o anos bissextos.
///
/// Autor: Luiz Felippe En�as - 170168221
///

//Declara��o de classe
class Data {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            void setValor(string); //M�todo para atribuir valor.
            string getValor() const; // M�todo para recuperar valor.
};

///
/// Retorna valor da Data.
///
/// @return valor da Data.
///

// Implementa��o de m�todo inline.
inline string Data::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DATA_HPP_INCLUDED
