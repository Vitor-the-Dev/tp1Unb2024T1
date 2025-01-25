#include "nome.hpp"

///
/// Valida o valor informado.
///

// M�todo para valida��o de valor.
void Nome::validar(string valor){
    if (valor.length() > 30)
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena o Nome caso o valor informado seja v�lido.
///
/// Lan�a exce��o caso o valor informado seja inv�lido.
///
/// @param valor Nome.
///
/// @throw invalid_argument
///

// M�todo para armazenamento de valor.
void Nome::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
