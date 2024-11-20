#include "duracao.hpp"

void Duracao::validar(int valor){
    if(valor < 0 || valor > 360)
        throw invalid_argument("Argumento invalido.");
}

void Duracao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}
