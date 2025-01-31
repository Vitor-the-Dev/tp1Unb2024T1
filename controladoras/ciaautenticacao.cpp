#include <iostream>
#include "../dominios/senha.hpp"
#include "ciaautenticacao.hpp"

// Implementações de métodos de classe controladora.

bool CntrIAAutenticacao::autenticar(Codigo *codigo) {

    // Solicitar codigo e senha.

    Senha senha;
    string entrada;

    while(true) {

        cout << endl << "Autenticacao de Conta." << endl << endl;

        try {
            cout << "Digite o codigo: ";
            cin >> entrada;
            codigo->setValor(entrada);
            cout << "Digite a senha: ";
            cin >> entrada;
            senha.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Codigo e/ou senha em formato incorreto." << endl;
        }
    }

    // Solicitar autenticação.

    string erro = "";

    if (cntrISAutenticacao->autenticar(*codigo, senha, erro)) {
        cout << endl << "Autenticacao realizada com sucesso.";
        return true;
    } else {
        cout << endl << "Falha na autenticacao.";
        cout << endl << erro;
        return false;
    }

}
