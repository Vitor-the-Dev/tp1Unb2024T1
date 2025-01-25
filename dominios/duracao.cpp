#include "duracao.hpp"

///
/// Valida o valor informado.
///

// Método para validação de valor.
void Duracao::validar(int valor){
    if(valor < 0 || valor > 360)
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena a Duração caso o valor informado seja válido.
///
/// Lança exceção caso o valor informado seja inválido.
///
/// @param valor Duração.
///
/// @throw invalid_argument
///

// Método para armazenamento de valor.
void Duracao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}
