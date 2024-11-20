#ifndef HORARIO_HPP_INCLUDED
#define HORARIO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Horario {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

inline string Horario::getValor() const { //Implementação de método
    return valor;
}

#endif // HORARIO_HPP_INCLUDED
