#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;


/// Classe que representa uma Avaliação com um valor numérico.
/// Responsavel por armazenar, validar e gerenciar um valor associado a avaliação.
class Avaliacao {
    private:
            /// Valida valor para 
            /// @param valor O valor a ser validado.
            int valor; //Atributo para armazenar valor.
            void validar(int); //Metodo para validar valor.
    public:
            /// Atribui um valor inteiro a avaliacao após valida-lo.
             
            void setValor(int); //Metodo para atribuir valor.

            /// Recupera o valor atribuido a avaliacao.
            int getValor() const; // Metodo para recuperar valor.
};

/// Implementação inline de getValor.
/// @return O valor armazenado.
inline int Avaliacao::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // AVALIACAO_HPP_INCLUDED
