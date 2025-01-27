#include <iostream>
#include "../dominios/senha.hpp"
#include "ciaautenticacao.hpp"

// Implementa��es de m�todos de classe controladora.

bool CntrIAAutenticacao::autenticar(Codigo *codigo) {
    Senha senha;
    string entrada;

    // Solicitar codigo e senha.

    while(true) {

        cout << endl << "Autenticacao de usuario." << endl << endl;

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
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    bool resultado = cntrISAutenticacao->autenticar(*codigo, senha);

    // Retornar resultado da autentica��o.

    return resultado;
}
