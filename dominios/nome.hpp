#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padrão para representação do Nome.
///
/// Regras de formato:
///
/// - Valor válido caso seja texto com até 30 caracteres.
///
/// Autor: Vitor Carlos Fernandes - 190142332
///

//Declaração de classe
class Nome {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

///
/// Retorna valor do Nome.
///
/// @return valor do Nome.
///

// Implementação de método inline.
inline string Nome::getValor() const { //Implementação de método
    return valor;
}

#endif // NOME_HPP_INCLUDED
