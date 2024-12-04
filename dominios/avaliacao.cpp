#include "avaliacao.hpp"

/// Valida input valor para avaliacao, conferindo que cai num valor entre [0,5]
/// @param valor valor para ser validado
/// @throws std::invalid_argument se o valor e menor que 0 ou maior que 5


void Avaliacao::validar(int valor){
    if(valor < 0 || valor > 5)
        throw invalid_argument("Argumento invalido.");
}

/// Valida input valor, e passa o input para o objeto
/// @param valor valor para ser validado e passado para o objeto
/// @throws std::invalid_argument se o valor e menor que 0 ou maior que 5 atraves do metodo validar

void Avaliacao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}
