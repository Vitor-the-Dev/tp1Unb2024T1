#ifndef HORARIO_HPP_INCLUDED
#define HORARIO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padrão para representação do Horário.
///
/// Regras de formato:
///
/// - Valor válido caso formato HH:MM. HH pode ser 00 a 23. MM pode ser 00 a 59.
///
/// Autor: Vitor Carlos Fernandes - 190142332
///

//Declaração de classe
class Horario {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

///
/// Retorna valor do Horário.
///
/// @return valor do Horário.
///

// Implementação de método inline.
inline string Horario::getValor() const { //Implementação de método
    return valor;
}

#endif // HORARIO_HPP_INCLUDED
