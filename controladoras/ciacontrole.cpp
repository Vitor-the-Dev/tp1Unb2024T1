#include <locale>
#include <iostream>
#include <windows.h> // Para SetConsoleOutputCP(CP_UTF8)
#include <limits> // Para std::numeric_limits
#include "ciacontrole.hpp"

using namespace std;

/**
 * @brief Metodo responsável pela execução do controle da aplicação.
 * @author Luiz Felippe Enéas - 170168221
 */
void CntrApresentacaoControle::executar() {
    setlocale(LC_ALL, ".utf8");
    SetConsoleOutputCP(CP_UTF8); // Configurar UTF-8 no console do Windows
    SetConsoleCP(CP_UTF8); // Configura a entrada do console para UTF-8

    // Simular apresentacao de tela inicial do sistema.

    int opcao;
    while (true) {

        cout << endl<< endl << "Tela inicial de sistema de viagem." << endl;
        cout << endl << "Escolha a opcao desejada e pressione Enter:";
        cout << endl << "1. Entrar no Sistema.";
        cout << endl << "2. Criar Conta no Sistema.";
        cout << endl << "9. Sair do Sistema.";
        cout << endl << "Opcao: ";

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

        cout << "Opcao escolhida: " << to_string(opcao) << endl;

        switch (opcao) {

            case 1: // Entrar no Sistema.
                if (cntrIAAutenticacao->autenticar(&codigo)) {
                    bool apresentar = true;
                    while (apresentar) {

                        cout << endl << endl << "Tela de selecao de servico." << endl;
                        cout << endl << "Escolha a opcao desejada e pressione Enter:";
                        cout << endl << "Conta ................... Hospedagem ..............";
                        cout << endl << "01. Listar contas ....... 30. Criar hospedagem.....";
                        cout << endl << "02. Consultar conta ..... 31. Listar hospedagens...";
                        cout << endl << "03. Atualizar conta ..... 32. Consultar hospedagem.";
                        cout << endl << "04. Excluir conta ....... 33. Atualizar hospedagem.";
                        cout << endl << "......................... 34. Excluir hospedagem...";
                        cout << endl << "Viagem ............................................";
                        cout << endl << "10. Criar viagem ........ Atividade................";
                        cout << endl << "11. Listar viagens ...... 40. Criar atividade......";
                        cout << endl << "12. Consultar viagem .... 41. Listar atividades....";
                        cout << endl << "13. Atualizar viagem .... 42. Consultar atividade..";
                        cout << endl << "14. Excluir viagem ...... 43. Atualizar atividade..";
                        cout << endl << "......................... 44. Excluir atividade....";
                        cout << endl << "Destino ...........................................";
                        cout << endl << "20. Criar destino ....... Sessao...................";
                        cout << endl << "21. Listar destinos ......99. Encerrar sessao......";
                        cout << endl << "22. Consultar destino .............................";
                        cout << endl << "23. Atualizar destino .............................";
                        cout << endl << "24. Excluir destino ...............................";

                        cout << endl << endl << "Opcao: ";

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

                        cout << "Opcao escolhida: " << to_string(opcao) << endl;

                        switch (opcao) {

                            // Conta
                            case 1: // Listar Contas no Sistema.
                                cntrIAConta->listar();
                                break;
                            case 2: // Consultar Conta no Sistema.
                                cntrIAConta->ler(&codigo);
                                break;
                            case 3: // Atualizar Conta no Sistema.
                                cntrIAConta->atualizar(&codigo);
                                break;
                            case 4: // Excluir Conta no Sistema.
                                if (cntrIAConta->excluir(&codigo)) {
                                    cout << endl << "Encerrando sessao." << endl;
                                    apresentar = false;
                                }
                                break;

                            // Viagem
                            case 10: // Criar Viagem no Sistema.
                                cntrIAViagem->criar();
                                break;
                            case 11: // Listar Viagem no Sistema.
                                cntrIAViagem->listar();
                                break;
                            case 12: // Consultar Viagem no Sistema.
                                cntrIAViagem->ler();
                                break;
                            case 13: // Atualizar Viagem no Sistema.
                                cntrIAViagem->atualizar();
                                break;
                            case 14: // Excluir Viagem no Sistema.
                                cntrIAViagem->excluir();
                                break;

                            // Destino
                            case 20: // Criar Destino no Sistema.
                                cntrIADestino->criar();
                                break;
                            case 21: // Listar Destino no Sistema.
                                cntrIADestino->listar();
                                break;
                            case 22: // Consultar Destino no Sistema.
                                cntrIADestino->ler();
                                break;
                            case 23: // Atualizar Destino no Sistema.
                                cntrIADestino->atualizar();
                                break;
                            case 24: // Excluir Destino no Sistema.
                                cntrIADestino->excluir();
                                break;

                            // Hospedagem
                            case 30: // Criar Hospedagem no Sistema.
                                cntrIAHospedagem->criar();
                                break;
                            case 31: // Listar Hospedagem no Sistema.
                                cntrIAHospedagem->listar();
                                break;
                            case 32: // Consultar Hospedagem no Sistema.
                                cntrIAHospedagem->ler();
                                break;
                            case 33: // Atualizar Hospedagem no Sistema.
                                cntrIAHospedagem->atualizar();
                                break;
                            case 34: // Excluir Hospedagem no Sistema.
                                cntrIAHospedagem->excluir();
                                break;

                            // Atividade
                            case 40: // Criar Atividade no Sistema.
                                cntrIAAtividade->criar();
                                break;
                            case 41: // Listar Atividade no Sistema.
                                cntrIAAtividade->listar();
                                break;
                            case 42: // Consultar Atividade no Sistema.
                                cntrIAAtividade->ler();
                                break;
                            case 43: // Atualizar Atividade no Sistema.
                                cntrIAAtividade->atualizar();
                                break;
                            case 44: // Excluir Atividade no Sistema.
                                cntrIAAtividade->excluir();
                                break;

                            // Encerrar sessao.
                            case 99:
                                apresentar = false;
                                break;

                            default:
                                cout << "Erro: Opcao invalida. Tente novamente." << endl;

                        }

                    }

                }
                break;

            case 2: // Cadastrar Conta no Sistema.
                cntrIAConta->criar(&codigo);
                break;

            case 9: // Sair do Sistema.
                exit(0);

            default:
                cout << "Erro: Opcao invalida. Tente novamente." << endl;
        }

    }

    return;
}
