#include "senha.hpp"
#include <algorithm> // para adjacent_find
#include <iostream>

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

/// checa se uma senha valor e valida
/// @param valor O valor da senha a ser validado
void Senha::validar(string valor){
    isValidPassword(valor);
}

/// Atribui um valor para a duracao apos valida-lo.
/// @param valor O valor da duracao a ser validado e atribuido.
/// @throws std::invalid_argument Se a senha nao 
void Senha::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
