#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Data {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

inline string Data::getValor() const { //Implementação de método
    return valor;
}

#endif // DATA_HPP_INCLUDED
