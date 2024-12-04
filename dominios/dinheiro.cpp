#include "dinheiro.hpp"


/// Valida valor monetario garantido que e menor que 200000, e nao negativo
/// @param valor valor monetario para ser validado
/// @throws std::invalid_argument se o valor e negativou ou maior que 200000
void Dinheiro::validar(float valor){
    if (valor < 0 || valor > 200000)
        throw invalid_argument("Argumento invalido.");
}


/// Valida input valor, e passa o input para o objeto
/// @param valor valor para ser validado e passado para o objeto

void Dinheiro::setValor(float valor){
    validar(valor);
    this->valor = valor;
}
