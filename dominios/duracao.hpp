#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Duracao {
    private:
            int valor; //Atributo para armazenar valor.
            void validar(int); //M�todo para validar valor.
    public:
            void setValor(int); //M�todo para atribuir valor.
            int getValor() const; // M�todo para recuperar valor.
};

inline int Duracao::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DURACAO_HPP_INCLUDED
