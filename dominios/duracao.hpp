#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padrão para representação da Duração.
///
/// Regras de formato:
///
/// - Valor válido caso <u>maior</u> ou igual a 0 e <u>menor</u> ou igual a 360.
///
/// Autor: Pedro Afonso Custódio de Lima - 232011350
///

//Declaração de classe
class Duracao {
    private:
            int valor; //Atributo para armazenar valor.
            void validar(int); //Método para validar valor.
    public:
            void setValor(int); //Método para atribuir valor.
            int getValor() const; // Método para recuperar valor.
};

///
/// Retorna valor da Duração.
///
/// @return valor da Duração.
///

// Implementação de método inline.
inline int Duracao::getValor() const { //Implementação de método
    return valor;
}

#endif // DURACAO_HPP_INCLUDED
