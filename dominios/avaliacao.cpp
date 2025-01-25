#include "avaliacao.hpp"

///
/// Valida o valor informado.
///

// M�todo para valida��o de valor.
void Avaliacao::validar(int valor){
    if(valor < MINIMO || valor > MAXIMO)
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena a Avalia��o caso o valor informado seja v�lido.
///
/// Lan�a exce��o caso o valor informado seja inv�lido.
///
/// @param valor Avalia��o.
///
/// @throw invalid_argument
///

// M�todo para armazenamento de valor.
void Avaliacao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}
