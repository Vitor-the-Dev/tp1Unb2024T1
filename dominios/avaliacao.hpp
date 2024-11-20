#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Avaliacao {
    private:
            int valor; //Atributo para armazenar valor.
            void validar(int); //M�todo para validar valor.
    public:
            void setValor(int); //M�todo para atribuir valor.
            int getValor() const; // M�todo para recuperar valor.
};

inline int Avaliacao::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // AVALIACAO_HPP_INCLUDED
