#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Senha {
    private:
            /// Valida uma senha conforme as 
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            void setValor(string); //M�todo para atribuir valor.
            string getValor() const; // M�todo para recuperar valor.
};

inline string Senha::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // SENHA_HPP_INCLUDED
