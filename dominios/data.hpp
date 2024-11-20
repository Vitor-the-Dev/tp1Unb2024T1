#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Data {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            void setValor(string); //M�todo para atribuir valor.
            string getValor() const; // M�todo para recuperar valor.
};

inline string Data::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DATA_HPP_INCLUDED
