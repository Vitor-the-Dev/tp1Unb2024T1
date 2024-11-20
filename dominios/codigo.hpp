#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Codigo {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

inline string Codigo::getValor() const { //Implementação de método
    return valor;
}

#endif // CODIGO_HPP_INCLUDED
