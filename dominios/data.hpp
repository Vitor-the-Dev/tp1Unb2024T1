#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padrão para representação da Data.
///
/// Regras de formato:
///
/// - Valor válido caso tenha o formato DD-MM-AA. DD - 00 a 31, MM - 01 a 12, AA - 00 a 99. Leva em consideração anos bissextos.
///
/// Autor: Luiz Felippe Enéas - 170168221
///

//Declaração de classe
class Data {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

///
/// Retorna valor da Data.
///
/// @return valor da Data.
///

// Implementação de método inline.
inline string Data::getValor() const { //Implementação de método
    return valor;
}

#endif // DATA_HPP_INCLUDED
