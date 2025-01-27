#include "senha.hpp"
#include <algorithm> // para adjacent_find
#include <iostream>

///
/// Valida o valor informado como senha.
///

void isValidPassword(const string &password) {
    // Verifica se todos os caracteres s�o d�gitos
    if (!all_of(password.begin(), password.end(), ::isdigit)) {
        throw invalid_argument("Argumento invalido.");
    }
    // Verifica se a senha est� em ordem crescente
    bool isAscending = true;
    bool isDescending = true;
    for (size_t i = 1; i < password.length(); ++i) {
        if (password[i] != password[i - 1] + 1) {
            isAscending = false;
        }
        if (password[i] != password[i - 1] - 1) {
            isDescending = false;
        }
    }
    // Se a senha est� em ordem crescente ou decrescente, n�o � v�lida
    if (isAscending || isDescending) {
        throw invalid_argument("Argumento invalido.");
    }
}

///
/// Valida o valor informado.
///

// M�todo para valida��o de valor.
void Senha::validar(string valor){
    isValidPassword(valor);
}

///
/// Armazena a Senha caso o valor informado seja v�lido.
///
/// Lan�a exce��o caso o valor informado seja inv�lido.
///
/// @param valor Senha.
///
/// @throw invalid_argument
///

// M�todo para armazenamento de valor.
void Senha::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
