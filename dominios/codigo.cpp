#include "codigo.hpp"

/// Valida input valor para validacao, conferindo que todos caracteres sao alfanuméricos
/// @param valor valor String a ser validada
/// @throws std::invalid_argument Se o valor contém caracteres não alfanuméricos, volta "Argumento Invalido"

void Codigo::validar(string valor){
    for (int i = 0; i < valor.length(); i++) {
        if (!isalnum(valor[i])) {
            throw invalid_argument("Argumento invalido.");
        }
    }
}

/// Valida input valor, e passa o input para o objeto
/// @param valor valor String a ser validada e atribuída para o objeto
/// @throws std::invalid_argument Se o valor contém caracteres não alfanuméricos, volta "Argumento Invalido" atraves do metodo validar



void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
