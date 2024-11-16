#include "nome.hpp"

bool Nome::validar(std::string valor){
    if (valor.length() > 30)
        return false;
    return true;
}

bool Nome::setValor(std::string valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
