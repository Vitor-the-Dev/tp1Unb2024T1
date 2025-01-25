#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padr�o para representa��o do Nome.
///
/// Regras de formato:
///
/// - Valor v�lido caso seja texto com at� 30 caracteres.
///
/// Autor: Vitor Carlos Fernandes - 190142332
///

//Declara��o de classe
class Nome {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            void setValor(string); //M�todo para atribuir valor.
            string getValor() const; // M�todo para recuperar valor.
};

///
/// Retorna valor do Nome.
///
/// @return valor do Nome.
///

// Implementa��o de m�todo inline.
inline string Nome::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // NOME_HPP_INCLUDED
