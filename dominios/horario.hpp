#ifndef HORARIO_HPP_INCLUDED
#define HORARIO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Horario {
    private:
            /// valida e armazena um valor horario valido
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            /// Atribui um valor horario
            void setValor(string); //M�todo para atribuir valor.
            /// recupera um valor horario atribuido
            string getValor() const; // M�todo para recuperar valor.
};

inline string Horario::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // HORARIO_HPP_INCLUDED
