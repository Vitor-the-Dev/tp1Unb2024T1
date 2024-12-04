#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Data {
    private:

            /// Valida valor para 
            /// @param valor O valor a ser validado.
            string valor; //Atributo para armazenar valor.
            void validar(string); //Metodo para validar valor.
    public:
            /// Atribui um valor inteiro a avaliacao após valida-lo.
            void setValor(string); //Metodo para atribuir valor.
            /// Recupera o valor atribuido a avaliacao.
            string getValor() const; // Metodo para recuperar valor.
};

/// Implementação inline de getValor.
/// @return O valor armazenado.
inline string Data::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DATA_HPP_INCLUDED
