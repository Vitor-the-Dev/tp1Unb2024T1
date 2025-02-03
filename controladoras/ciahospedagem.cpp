#include <iostream>
#include <string>
#include <limits> // Para std::numeric_limits
#include <list>
#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/avaliacao.hpp"
#include "../entidades/hospedagem.hpp"
#include "ciahospedagem.hpp"

// Implementa��es de m�todos de classe controladora.

/**
 * @brief Solicita dados para criar uma nova hospedagem no cont�iner.
 * @return true se a hospedagem foi inclu�da com sucesso,
 * @return false se j� existir uma hospedagem com o mesmo c�digo.
 */
bool CntrIAHospedagem::criar() {

    cout << endl << "Criacao de Hospedagem." << endl << endl;

    Codigo codigo;
    Nome nome;
    Dinheiro dinheiro;
    Avaliacao avaliacao;

    string entrada;
    int entrada_num;
    float entrada_float;
    while(true) {
        try {
            cin.clear(); cin.ignore();
            cout << "Digite o codigo da hospedagem: ";
                std::getline(std::cin, entrada);
                codigo.setValor(entrada);
            cout << "Digite o nome da hospedagem: ";
                std::getline(std::cin, entrada);
                nome.setValor(entrada);
            cout << "Digite o valor da hospedagem: ";
            while (true) {
                cin >> entrada_float;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Erro: Entrada invalida. Por favor, informe um numero decimal." << endl;
                    cout << "Opcao: ";
                } else {
                    break;
                }
            }
            dinheiro.setValor(entrada_float);
            cout << "Digite a avaliacao da hospedagem: ";
            while (true) {
                cin >> entrada_num;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Erro: Entrada invalida. Por favor, informe um numero inteiro." << endl;
                    cout << "Opcao: ";
                } else {
                    break;
                }
            }
            avaliacao.setValor(entrada_num);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Hospedagem hospedagem;
    hospedagem.setCodigo(codigo);
    hospedagem.setNome(nome);
    hospedagem.setDiaria(dinheiro);
    hospedagem.setAvaliacao(avaliacao);

    string erro = "";
    if (cntrISHospedagem->criar(hospedagem, erro)) {
        cout << endl << "Criacao da hospedagem realizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na criacao da hospedagem.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita listar as hospedagens no cont�iner.
 * @return true se foram listadas com sucesso,
 * @return false se n�o foram.
 */
bool CntrIAHospedagem::listar() {

    cout << endl << "Listagem de Hospedagens." << endl;

    std::list<Hospedagem> hospedagens;

    string erro = "";
    if (cntrISHospedagem->listar(hospedagens, erro)) {
        for (auto &hospedagem : hospedagens) {
            cout << endl << "Codigo: " << hospedagem.getCodigo().getValor();
            cout << " - " << "Nome: " << hospedagem.getNome().getValor();
            cout << " - " << "Diaria: R$ " << hospedagem.getDiaria().getValor();
            cout << " - " << "Avaliacao: " << hospedagem.getAvaliacao().getValor();
        }
        return true;
    } else {
        cout << endl << "Falha na listagens das hospedagens.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para ler uma hospedagem no cont�iner.
 * @return true se a hospedagem foi lida com sucesso,
 * @return false se n�o foi.
 */
bool CntrIAHospedagem::ler() {

    cout << endl << "Consulta de Hospedagem." << endl << endl;

    Codigo codigo;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo da hospedagem: ";
                cin >> entrada;
                codigo.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Hospedagem hospedagem;
    hospedagem.setCodigo(codigo);

    string erro = "";
    if (cntrISHospedagem->ler(hospedagem, erro)) {
        cout << endl << "Codigo: " << hospedagem.getCodigo().getValor();
        cout << " - " << "Nome: " << hospedagem.getNome().getValor();
        cout << " - " << "Diaria: R$ " << hospedagem.getDiaria().getValor();
        cout << " - " << "Avaliacao: " << hospedagem.getAvaliacao().getValor();
        return true;
    } else {
        cout << endl << "Hospedagem nao encontrada.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para atualizar uma hospedagem no cont�iner.
 * @return true se a hospedagem foi atualizada com sucesso,
 * @return false se n�o foi.
 */
bool CntrIAHospedagem::atualizar() {

    cout << endl << "Atualizacao de Hospedagem." << endl << endl;

    Codigo codigo;
    Nome nome;
    Dinheiro dinheiro;
    Avaliacao avaliacao;

    string entrada;
    int entrada_num;
    float entrada_float;
    while(true) {
        try {
            cin.clear(); cin.ignore();
            cout << "Digite o codigo da hospedagem: ";
                std::getline(std::cin, entrada);
                codigo.setValor(entrada);
            cout << "Digite o nome da hospedagem: ";
                std::getline(std::cin, entrada);
                nome.setValor(entrada);
            cout << "Digite o valor da hospedagem: ";
            while (true) {
                cin >> entrada_float;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Erro: Entrada invalida. Por favor, informe um numero decimal." << endl;
                    cout << "Opcao: ";
                } else {
                    break;
                }
            }
            dinheiro.setValor(entrada_float);
            cout << "Digite a avaliacao da hospedagem: ";
            while (true) {
                cin >> entrada_num;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Erro: Entrada invalida. Por favor, informe um numero inteiro." << endl;
                    cout << "Opcao: ";
                } else {
                    break;
                }
            }
            avaliacao.setValor(entrada_num);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Hospedagem hospedagem;
    hospedagem.setCodigo(codigo);
    hospedagem.setNome(nome);
    hospedagem.setDiaria(dinheiro);
    hospedagem.setAvaliacao(avaliacao);

    string erro = "";
    if (cntrISHospedagem->atualizar(hospedagem, erro)) {
        cout << endl << "Hospedagem atualizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na atualizacao da hospedagem.";
        cout << endl << erro << endl;
        return false;
    }

}
/**
 * @brief Solicita dados para excluir uma hospedagem no cont�iner.
 * @return true se a hospedagem foi exclu�da com sucesso,
 * @return false se n�o foi.
 */
bool CntrIAHospedagem::excluir() {

    cout << endl << "Exclusao de Hospedagem." << endl;

    Codigo codigo;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo da hospedagem: ";
                cin >> entrada;
                codigo.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    cout << endl << "Voce realmente deseja excluir a hospedagem (codigo: " << codigo.getValor() << ")?" << endl;
    cout << "1. Sim." << endl;
    cout << "2. Nao." << endl;
    cout << "Opcao: ";

    int opcao;
    while (true) {
        cin >> opcao;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Erro: Entrada invalida. Por favor, informe um numero inteiro." << endl;
            cout << "Opcao: ";
        } else {
            break;
        }
    }

    if (opcao == 1) {

        string erro = "";
        if (cntrISHospedagem->excluir(codigo, erro)) {
            cout << endl << "Exclusao da hospedagem realizada com sucesso." << endl;
            return true;
        } else {
            cout << endl << "Falha na exclusao da hospedagem.";
            cout << endl << erro << endl;
            return false;
        }

    } else {
        cout << endl << "Exclusao nao confirmada." << endl;
        return false;
    }

}
