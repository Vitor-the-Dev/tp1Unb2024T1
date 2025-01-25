#include "nome.hpp"

///
/// Valida o valor informado.
///

// Método para validação de valor.
void Nome::validar(string valor){
    if (valor.length() > 30)
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena o Nome caso o valor informado seja válido.
///
/// Lança exceção caso o valor informado seja inválido.
///
/// @param valor Nome.
///
/// @throw invalid_argument
///

// Método para armazenamento de valor.
void Nome::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
