#include <locale>
#include <iostream>
#include <windows.h> // Para SetConsoleOutputCP(CP_UTF8)
#include <limits> // Para std::numeric_limits
#include "ciacontrole.hpp"

using namespace std;

void CntrApresentacaoControle::executar() {
    setlocale(LC_ALL, ".utf8");
    SetConsoleOutputCP(CP_UTF8); // Configurar UTF-8 no console do Windows
    SetConsoleCP(CP_UTF8); // Configura a entrada do console para UTF-8

    // Simular apresentacao de tela inicial do sistema.

    int opcao;
    while (true) {

        cout << endl<< endl << "Tela inicial de sistema." << endl;
        cout << endl << "Escolha a opcao desejada e pressione Enter:";
        cout << endl << "1. Entrar no Sistema.";
        cout << endl << "2. Cadastrar no Sistema.";
        cout << endl << "9. Sair do Sistema.";
        cout << endl << "Opcao: ";

        while (true) {
            cin >> opcao;
            if (cin.fail()) {
                cin.clear(); // Limpa o estado de erro
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora caracteres invalidos no buffer
                cout << "Erro: Entrada invalida. Por favor, um numero inteiro." << endl;
                cout << "Opcao: ";
            } else {
                break; // Entrada valida, sai do loop
            }
        }

        cout << "Opcao escolhida: " << to_string(opcao) << endl;

        switch (opcao) {
            case 1:
                if (cntrIAAutenticacao->autenticar(&codigo)) {
                    bool apresentar = true;
                    while (apresentar) {

                        cout << endl<< endl << "Tela de selecao de servico." << endl;
                        cout << endl << "Escolha a opcao desejada e pressione Enter:";
                        cout << endl << "1. .";
                        cout << endl << "2. .";
                        cout << endl << "9. Encerrar sessao.";
                        cout << endl << "Opcao: ";

                        while (true) {
                            cin >> opcao;
                            if (cin.fail()) {
                                cin.clear(); // Limpa o estado de erro
                                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora caracteres invalidos no buffer
                                cout << "Erro: Entrada invalida. Por favor, um numero inteiro." << endl;
                                cout << "Opcao: ";
                            } else {
                                break; // Entrada valida, sai do loop
                            }
                        }

                        cout << "Opcao escolhida: " << to_string(opcao) << endl;

                        switch (opcao) {
                            case 1:
                                break;
                            case 2:
                                break;
                            case 9:
                                apresentar = false;
                                break;
                            default:
                                cout << "Erro: Opcao invalida. Tente novamente." << endl;
                        }

                    }

                } else {
                    cout << endl << "Falha na autenticacao.";
                }
                break;
            case 2:
                break;
            case 9:
                exit(0);
            default:
                cout << "Erro: Opcao invalida. Tente novamente." << endl;
        }

    }

    return;
}
