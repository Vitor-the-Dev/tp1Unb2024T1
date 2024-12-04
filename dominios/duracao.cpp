#include "duracao.hpp"

/// Valida o valor da duracao, garantindo que esteja dentro do intervalo permitido.
/// @param valor O valor da duracao a ser validado.
/// @throws std::invalid_argument Se o valor for menor que 0 ou maior que 360.
void Duracao::validar(int valor) {
    if (valor < 0 || valor > 360)
        throw invalid_argument("Argumento invalido.");
}

/// Atribui um valor para a duracao apos valida-lo.
/// @param valor O valor da duracao a ser validado e atribuido.
/// @throws std::invalid_argument Se o valor for menor que 0 ou maior que 360, atraves do metodo validar.
void Duracao::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}
