#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Senha {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

inline string Senha::getValor() const { //Implementação de método
    return valor;
}

#endif // SENHA_HPP_INCLUDED
