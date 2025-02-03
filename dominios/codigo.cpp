#include "codigo.hpp"

///
/// Valida o valor informado.
///

// M�todo para valida��o de valor.
void Codigo::validar(string valor){
    if (valor.length() != 6) {
        throw invalid_argument("Argumento invalido.");
    }
    for (size_t i = 0; i < valor.length(); i++) {
        if (!isalnum(valor[i])) {
            throw invalid_argument("Argumento invalido.");
        }
    }
}

///
/// Armazena o C�digo caso o valor informado seja v�lido.
///
/// Lan�a exce��o caso o valor informado seja inv�lido.
///
/// @param valor C�digo.
///
/// @throw invalid_argument
///

// M�todo para armazenamento de valor.
void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
