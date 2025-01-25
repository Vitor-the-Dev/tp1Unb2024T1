#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padrão para representação da Senha.
///
/// Regras de formato:
///
/// - Valor válido caso tenha cinco dígitos (0 - 9). Não há dígito duplicado, os seis dígitos não podem estar em ordem crescente (01234, 12345, 23456 etc.) ou descrescente (43210, 54321, 65432 etc.).
///
/// Autor: Luiz Felippe Enéas - 170168221
///

//Declaração de classe
class Senha {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

///
/// Retorna valor da Senha.
///
/// @return valor da Senha.
///

// Implementação de método inline.
inline string Senha::getValor() const { //Implementação de método
    return valor;
}

#endif // SENHA_HPP_INCLUDED
