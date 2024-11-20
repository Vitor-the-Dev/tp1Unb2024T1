#include "dinheiro.hpp"

void Dinheiro::validar(float valor){
    if (valor < 0 || valor > 200000)
        throw invalid_argument("Argumento invalido.");
}

void Dinheiro::setValor(float valor){
    validar(valor);
    this->valor = valor;
}
