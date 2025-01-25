#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padr�o para representa��o da Avalia��o.
///
/// Regras de formato:
///
/// - Valor v�lido caso <u>maior</u> ou igual a 0 e <u>menor</u> ou igual a 5.
///
/// Autor: Luiz Felippe En�as - 170168221
///

//Declara��o de classe
class Avaliacao {
    private:
            static const int MAXIMO  = 5; // Constante.
            static const int MINIMO = 0; // Constante.
            int valor; //Atributo para armazenar valor.
            void validar(int); //M�todo para validar valor.
    public:
            void setValor(int); //M�todo para atribuir valor.
            int getValor() const; // M�todo para recuperar valor.
};

///
/// Retorna valor da Avalia��o.
///
/// @return valor da Avalia��o.
///

// Implementa��o de m�todo inline.
inline int Avaliacao::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // AVALIACAO_HPP_INCLUDED
