#include "duracao.hpp"

///
/// Valida o valor informado.
///

// M�todo para valida��o de valor.
void Duracao::validar(int valor){
    if(valor < 0 || valor > 360)
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena a Dura��o caso o valor informado seja v�lido.
///
/// Lan�a exce��o caso o valor informado seja inv�lido.
///
/// @param valor Dura��o.
///
/// @throw invalid_argument
///

// M�todo para armazenamento de valor.
void Duracao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}
