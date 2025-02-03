#include "codigo.hpp"

///
/// Valida o valor informado.
///

// Método para validação de valor.
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
/// Armazena o Código caso o valor informado seja válido.
///
/// Lança exceção caso o valor informado seja inválido.
///
/// @param valor Código.
///
/// @throw invalid_argument
///

// Método para armazenamento de valor.
void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
