#include "codigo.hpp"

bool Codigo::validar(std::string valor){
    for (int i = 0; i < valor.length(); i++) {
        if (!isalnum(valor[i])) {
            return false;
        }
    }
    return true;
}

bool Codigo::setValor(std::string valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
