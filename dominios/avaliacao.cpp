#include "avaliacao.hpp"

void Avaliacao::validar(int valor){
    if(valor < 0 || valor > 5)
        throw invalid_argument("Argumento invalido.");
}

void Avaliacao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}
