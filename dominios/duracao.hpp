#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padr�o para representa��o da Dura��o.
///
/// Regras de formato:
///
/// - Valor v�lido caso <u>maior</u> ou igual a 0 e <u>menor</u> ou igual a 360.
///
/// Autor: Pedro Afonso Cust�dio de Lima - 232011350
///

//Declara��o de classe
class Duracao {
    private:
            int valor; //Atributo para armazenar valor.
            void validar(int); //M�todo para validar valor.
    public:
            void setValor(int); //M�todo para atribuir valor.
            int getValor() const; // M�todo para recuperar valor.
};

///
/// Retorna valor da Dura��o.
///
/// @return valor da Dura��o.
///

// Implementa��o de m�todo inline.
inline int Duracao::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DURACAO_HPP_INCLUDED
