#include "senha.hpp"
#include <algorithm> // para std::adjacent_find

bool isValidPassword(const std::string &password) {
    // Verifica se todos os caracteres s�o d�gitos
    if (!std::all_of(password.begin(), password.end(), ::isdigit)) {
        return false;
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
    return !isAscending && !isDescending;
}

bool Senha::validar(std::string valor){
    return isValidPassword(valor);
}

bool Senha::setValor(std::string valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
