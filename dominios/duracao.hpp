#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Duracao {
    private:
            int valor; //Atributo para armazenar valor.
            void validar(int); //Método para validar valor.
    public:
            void setValor(int); //Método para atribuir valor.
            int getValor() const; // Método para recuperar valor.
};

inline int Duracao::getValor() const { //Implementação de método
    return valor;
}

#endif // DURACAO_HPP_INCLUDED
