#include <iostream>
#include <limits> // Para std::numeric_limits
#include "../dominios/senha.hpp"
#include "../entidades/conta.hpp"
#include "ciaconta.hpp"

// Implementações de métodos de classe controladora.

bool CntrIAConta::criar(Codigo *codigo) {

    cout << endl << "Criacao de Conta." << endl << endl;

    // Solicitar codigo e senha da conta.

    Senha senha;

    string entrada;
    while(true) {
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

    // Instancia Conta a ser cadastrada.
    Conta conta;
    conta.setCodigo(*codigo);
    conta.setSenha(senha);

    // Solicitar criacao da conta.

    string erro = "";
    if (cntrISConta->criar(conta, erro)) {
        cout << endl << "Criacao da conta realizada com sucesso.";
        return true;
    } else {
        cout << endl << "Falha na criacao da conta.";
        cout << endl << erro;
        return false;
    }

}

bool CntrIAConta::ler(Codigo *codigo) {

    cout << endl << "Verificacao de Conta." << endl << endl;

    // Instancia Conta a ser verificada.
    Conta conta;
    Codigo codigo1;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo a ser verificado: ";
                cin >> entrada;
                codigo1.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Codigo em formato incorreto." << endl;
        }
    }

    conta.setCodigo(codigo1);

    // Solicitar verificacao da conta.

    string erro = "";
    if (cntrISConta->ler(conta, erro)) {
        cout << endl << "Verificacao da conta realizada com sucesso.";
        return true;
    } else {
        cout << endl << "Falha na verificacao da conta.";
        cout << endl << erro;
        return false;
    }
}

bool CntrIAConta::atualizar(Codigo *codigo) {

    cout << endl << "Atualizacao de Conta." << endl << endl;

    // Instancia Conta a ser atualizada.
    Conta conta;
    conta.setCodigo(*codigo);

    // Instancia nova Senha.
    Senha senha;

    string entrada;
    while(true) {
        try {
            cout << "Digite a nova senha: ";
                cin >> entrada;
                senha.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Senha em formato incorreto." << endl;
        }
    }

    conta.setSenha(senha);

    // Solicitar atualizacao da conta.

    string erro = "";
    if (cntrISConta->atualizar(conta, erro)) {
        cout << endl << "Atualizacao da conta realizada com sucesso.";
        return true;
    } else {
        cout << endl << "Falha na atualizacao da conta.";
        cout << endl << erro;
        return false;
    }

}

bool CntrIAConta::excluir(Codigo *codigo) {

    cout << endl << "Exclusao de Conta." << endl;

    // Solicitar confirmacao da exclusao da conta.

    cout << endl << "Voce realmente deseja excluir a sua conta (codigo: " << codigo->getValor() << ")?" << endl;
    cout << endl << "1. Sim.";
    cout << endl << "2. Nao.";
    cout << endl << "Opcao: ";

    int opcao;
    while (true) {
        cin >> opcao;
        if (cin.fail()) {
            cin.clear(); // Limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora caracteres invalidos no buffer
            cout << "Erro: Entrada invalida. Por favor, informe um numero inteiro." << endl;
            cout << "Opcao: ";
        } else {
            break; // Entrada valida, sai do loop
        }
    }

    if (opcao == 1) { // confirma exclusão

        // Solicitar exclusao da conta.

        string erro = "";
        if (cntrISConta->excluir(*codigo, erro)) {
            cout << endl << "Exclusao da conta realizada com sucesso." << endl;
            return true;
        } else {
            cout << endl << "Falha na exclusao da conta." << endl;
            cout << endl << erro;
            return false;
        }

    } else {
        cout << endl << "Exclusao nao confirmada." << endl;
        return false;
    }

}
