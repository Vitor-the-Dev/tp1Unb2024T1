#include "nome.hpp"


/// Valida o valor doi nome, garantindo que seja menor que 30 caracteres
/// @param valor O valor String a ser validado.
/// @throws std::invalid_argument Se o valor for maior que 30 caracteres
void Nome::validar(string valor){
    if (valor.length() > 30)
        throw invalid_argument("Argumento invalido.");
}

/// Atribui um valor para a nome apos valida-lo.
/// @param valor O valor String a ser validado e atribuido
/// @throws std::invalid_argument Se o valor for maior que 30 caracteres
void Nome::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
