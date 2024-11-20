#include "nome.hpp"

void Nome::validar(string valor){
    if (valor.length() > 30)
        throw invalid_argument("Argumento invalido.");
}

void Nome::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
