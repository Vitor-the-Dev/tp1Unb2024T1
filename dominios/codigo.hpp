#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padrão para representação do Código.
///
/// Regras de formato:
///
/// - Valor válido caso tenha seis caracteres. Cada caracter pode ser letra (A - Z ou a - z) ou dígito (0 - 9).
///
/// Autor: Davi Cesar Silva Borges - 190105054
///

//Declaração de classe
class Codigo {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

///
/// Retorna valor do Código.
///
/// @return valor do Código.
///

// Implementação de método inline.
inline string Codigo::getValor() const { //Implementação de método
    return valor;
}

#endif // CODIGO_HPP_INCLUDED
