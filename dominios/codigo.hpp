#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;


/// Classe que representa um Codigo com um valor numérico.
/// Responsável por armazenar, validar e gerenciar um valor associado ao codigoi.
class Codigo {
    private:

            /// Valida valor para 
            /// @param valor O valor a ser validado.
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            /// Atribui um valor inteiro a avaliacao após valida-lo.
            void setValor(string); //M�todo para atribuir valor.
            /// Recupera o valor atribuido a avaliacao.
            string getValor() const; // M�todo para recuperar valor.
};


/// Implementação inline de getValor.
/// @return O valor armazenado.
inline string Codigo::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // CODIGO_HPP_INCLUDED
