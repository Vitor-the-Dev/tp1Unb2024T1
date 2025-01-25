#include "avaliacao.hpp"

///
/// Valida o valor informado.
///

// Método para validação de valor.
void Avaliacao::validar(int valor){
    if(valor < MINIMO || valor > MAXIMO)
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena a Avaliação caso o valor informado seja válido.
///
/// Lança exceção caso o valor informado seja inválido.
///
/// @param valor Avaliação.
///
/// @throw invalid_argument
///

// Método para armazenamento de valor.
void Avaliacao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}
