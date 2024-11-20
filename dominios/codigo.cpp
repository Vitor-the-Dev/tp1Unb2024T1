#include "codigo.hpp"

void Codigo::validar(string valor){
    for (int i = 0; i < valor.length(); i++) {
        if (!isalnum(valor[i])) {
            throw invalid_argument("Argumento invalido.");
        }
    }
}

void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
