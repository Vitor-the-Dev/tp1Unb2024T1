#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Duracao {
    private:
            /// Valida o valor da data, garantindo que esteja dentro do formato permitido.

            int valor; //Atributo para armazenar valor.
            void validar(int); //Metodo para validar valor.
    public:
            /// Atribui um valor data
            void setValor(int); //Metodo para atribuir valor.
            /// recupera um valor data
            int getValor() const; // Metodo para recuperar valor.
};

inline int Duracao::getValor() const { //Implementacao de metodo
    return valor;
}

#endif // DURACAO_HPP_INCLUDED
