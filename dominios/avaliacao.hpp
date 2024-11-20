#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Avaliacao {
    private:
            int valor; //Atributo para armazenar valor.
            void validar(int); //Método para validar valor.
    public:
            void setValor(int); //Método para atribuir valor.
            int getValor() const; // Método para recuperar valor.
};

inline int Avaliacao::getValor() const { //Implementação de método
    return valor;
}

#endif // AVALIACAO_HPP_INCLUDED
