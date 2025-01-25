#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padr�o para representa��o da Senha.
///
/// Regras de formato:
///
/// - Valor v�lido caso tenha cinco d�gitos (0 - 9). N�o h� d�gito duplicado, os seis d�gitos n�o podem estar em ordem crescente (01234, 12345, 23456 etc.) ou descrescente (43210, 54321, 65432 etc.).
///
/// Autor: Luiz Felippe En�as - 170168221
///

//Declara��o de classe
class Senha {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            void setValor(string); //M�todo para atribuir valor.
            string getValor() const; // M�todo para recuperar valor.
};

///
/// Retorna valor da Senha.
///
/// @return valor da Senha.
///

// Implementa��o de m�todo inline.
inline string Senha::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // SENHA_HPP_INCLUDED
