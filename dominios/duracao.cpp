#include "duracao.hpp"

bool Duracao::validar(int valor){
    if(valor < 0 || valor > 360)
        return false;
    return true;
}

bool Duracao::setValor(int valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
