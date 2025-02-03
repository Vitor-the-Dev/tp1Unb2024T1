#include <iostream>
#include <string>
#include <limits> // Para std::numeric_limits
#include <list>
#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
#include "../entidades/viagem.hpp"
#include "ciaviagem.hpp"

// Implementações de métodos de classe controladora.

/**
 * @brief Solicita dados para criar uma nova viagem no contêiner.
 * @return true se a viagem foi incluída com sucesso,
 * @return false se já existir uma viagem com o mesmo código.
 */
bool CntrIAViagem::criar() {

    cout << endl << "Criacao de Viagem." << endl << endl;

    Codigo codigo;
    Nome nome;
    Avaliacao avaliacao;

    string entrada;
    int entrada_num;
    while(true) {
        try {
            cin.clear(); cin.ignore();
            cout << "Digite o codigo da viagem: ";
                std::getline(std::cin, entrada);
                codigo.setValor(entrada);
            cout << "Digite o nome da viagem: ";
                std::getline(std::cin, entrada);
                nome.setValor(entrada);
            cout << "Digite a avaliacao da viagem: ";
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

    Viagem viagem;
    viagem.setCodigo(codigo);
    viagem.setNome(nome);
    viagem.setAvaliacao(avaliacao);

    string erro = "";
    if (cntrISViagem->criar(viagem, erro)) {
        cout << endl << "Criacao da viagem realizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na criacao da viagem.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita listar as viagens no contêiner.
 * @return true se foram listadas com sucesso,
 * @return false se não foram.
 */
bool CntrIAViagem::listar() {

    cout << endl << "Listagem de Viagens." << endl;

    std::list<Viagem> viagens;

    string erro = "";
    if (cntrISViagem->listar(viagens, erro)) {
        for (auto &viagem : viagens) {
            cout << endl << "Codigo: " << viagem.getCodigo().getValor();
            cout << " - " << "Nome: " << viagem.getNome().getValor();
            cout << " - " << "Avaliacao: " << viagem.getAvaliacao().getValor();
        }
        return true;
    } else {
        cout << endl << "Falha na listagens das viagens.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para ler uma viagem no contêiner.
 * @return true se a viagem foi lida com sucesso,
 * @return false se não foi.
 */
bool CntrIAViagem::ler() {

    cout << endl << "Consulta de Viagem." << endl << endl;

    Codigo codigo;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo da viagem: ";
                cin >> entrada;
                codigo.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Viagem viagem;
    viagem.setCodigo(codigo);

    string erro = "";
    if (cntrISViagem->ler(viagem, erro)) {
        cout << endl << "Codigo: " << viagem.getCodigo().getValor();
        cout << " - " << "Nome: " << viagem.getNome().getValor();
        cout << " - " << "Avaliacao: " << viagem.getAvaliacao().getValor();
        return true;
    } else {
        cout << endl << "Viagem nao encontrada.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para atualizar uma viagem no contêiner.
 * @return true se a viagem foi atualizada com sucesso,
 * @return false se não foi.
 */
bool CntrIAViagem::atualizar() {

    cout << endl << "Atualizacao de Viagem." << endl << endl;

    Codigo codigo;
    Nome nome;
    Avaliacao avaliacao;

    string entrada;
    int entrada_num;
    while(true) {
        try {
            cin.clear(); cin.ignore();
            cout << "Digite o codigo da viagem: ";
                std::getline(std::cin, entrada);
                codigo.setValor(entrada);
            cout << "Digite o nome da viagem: ";
                std::getline(std::cin, entrada);
                nome.setValor(entrada);
            cout << "Digite a avaliacao da viagem: ";
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

    Viagem viagem;
    viagem.setCodigo(codigo);
    viagem.setNome(nome);
    viagem.setAvaliacao(avaliacao);

    string erro = "";
    if (cntrISViagem->atualizar(viagem, erro)) {
        cout << endl << "Viagem atualizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na atualizacao da viagem.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para excluir uma viagem no contêiner.
 * @return true se a viagem foi excluída com sucesso,
 * @return false se não foi.
 */
bool CntrIAViagem::excluir() {

    cout << endl << "Exclusao de Viagem." << endl;

    Codigo codigo;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo da viagem: ";
                cin >> entrada;
                codigo.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    cout << endl << "Voce realmente deseja excluir a viagem (codigo: " << codigo.getValor() << ")?" << endl;
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
        if (cntrISViagem->excluir(codigo, erro)) {
            cout << endl << "Exclusao da viagem realizada com sucesso." << endl;
            return true;
        } else {
            cout << endl << "Falha na exclusao da viagem.";
            cout << endl << erro << endl;
            return false;
        }

    } else {
        cout << endl << "Exclusao nao confirmada." << endl;
        return false;
    }

}
