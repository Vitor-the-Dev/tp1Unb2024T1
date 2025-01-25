#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padrão para representação da Avaliação.
///
/// Regras de formato:
///
/// - Valor válido caso <u>maior</u> ou igual a 0 e <u>menor</u> ou igual a 5.
///
/// Autor: Luiz Felippe Enéas - 170168221
///

//Declaração de classe
class Avaliacao {
    private:
            static const int MAXIMO  = 5; // Constante.
            static const int MINIMO = 0; // Constante.
            int valor; //Atributo para armazenar valor.
            void validar(int); //Método para validar valor.
    public:
            void setValor(int); //Método para atribuir valor.
            int getValor() const; // Método para recuperar valor.
};

///
/// Retorna valor da Avaliação.
///
/// @return valor da Avaliação.
///

// Implementação de método inline.
inline int Avaliacao::getValor() const { //Implementação de método
    return valor;
}

#endif // AVALIACAO_HPP_INCLUDED
