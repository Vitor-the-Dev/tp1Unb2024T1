#include "dinheiro.hpp"

///
/// Valida o valor informado.
///

// M�todo para valida��o de valor.
void Dinheiro::validar(float valor){
    if (valor < 0 || valor > 200000)
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena o Dinheiro caso o valor informado seja v�lido.
///
/// Lan�a exce��o caso o valor informado seja inv�lido.
///
/// @param valor Dinheiro.
///
/// @throw invalid_argument
///

// M�todo para armazenamento de valor.
void Dinheiro::setValor(float valor){
    validar(valor);
    this->valor = valor;
}
