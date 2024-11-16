#include "dinheiro.hpp"

bool Dinheiro::validar(float valor){
    if (valor < 0 || valor > 200000)
        return false;
    return true;
}

bool Dinheiro::setValor(float valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}

