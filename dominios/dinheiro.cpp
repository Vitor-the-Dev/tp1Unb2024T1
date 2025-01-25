#include "dinheiro.hpp"

///
/// Valida o valor informado.
///

// Método para validação de valor.
void Dinheiro::validar(float valor){
    if (valor < 0 || valor > 200000)
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena o Dinheiro caso o valor informado seja válido.
///
/// Lança exceção caso o valor informado seja inválido.
///
/// @param valor Dinheiro.
///
/// @throw invalid_argument
///

// Método para armazenamento de valor.
void Dinheiro::setValor(float valor){
    validar(valor);
    this->valor = valor;
}
