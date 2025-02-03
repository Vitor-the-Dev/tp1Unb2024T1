#include <iostream>
#include <string>
#include <limits> // Para std::numeric_limits
#include <list>
#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"
#include "../entidades/destino.hpp"
#include "ciadestino.hpp"

// Implementações de métodos de classe controladora.

/**
 * @brief Solicita dados para criar um novo destino no contêiner.
 * @return true se o destino foi incluído com sucesso,
 * @return false se já existir um destino com o mesmo código.
 */
bool CntrIADestino::criar() {

    cout << endl << "Criacao de Destino." << endl << endl;

    Codigo codigo;
    Nome nome;
    Data data_ini;
    Data data_fim;

    string entrada;
    while(true) {
        try {
            cin.clear(); cin.ignore();
            cout << "Digite o codigo do destino: ";
                std::getline(std::cin, entrada);
                codigo.setValor(entrada);
            cout << "Digite o nome do destino: ";
                std::getline(std::cin, entrada);
                nome.setValor(entrada);
            cout << "Digite a data de inicio do destino: ";
                std::getline(std::cin, entrada);
                data_ini.setValor(entrada);
            cout << "Digite a data de fim do destino: ";
                std::getline(std::cin, entrada);
                data_fim.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Destino destino;
    destino.setCodigo(codigo);
    destino.setNome(nome);
    destino.setDataIni(data_ini);
    destino.setDataFim(data_fim);

    string erro = "";
    if (cntrISDestino->criar(destino, erro)) {
        cout << endl << "Criacao do destino realizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na criacao do destino.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita listar os destinos no contêiner.
 * @return true se foram listados com sucesso,
 * @return false se não foram.
 */
bool CntrIADestino::listar() {

    cout << endl << "Listagem de Destinos." << endl;

    std::list<Destino> destinos;

    string erro = "";
    if (cntrISDestino->listar(destinos, erro)) {
        for (auto &destino : destinos) {
            cout << endl << "Codigo: " << destino.getCodigo().getValor();
            cout << " - " << "Nome: " << destino.getNome().getValor();
            cout << " - " << "Data Inicio: " << destino.getDataIni().getValor();
            cout << " - " << "Data Fim: " << destino.getDataFim().getValor();
        }
        return true;
    } else {
        cout << endl << "Falha na listagens das destinos.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para ler um destino no contêiner.
 * @return true se o destino foi lido com sucesso,
 * @return false se não foi.
 */
bool CntrIADestino::ler() {

    cout << endl << "Consulta de Destino." << endl << endl;

    Codigo codigo;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo do destino: ";
                cin >> entrada;
                codigo.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Destino destino;
    destino.setCodigo(codigo);

    string erro = "";
    if (cntrISDestino->ler(destino, erro)) {
        cout << endl << "Codigo: " << destino.getCodigo().getValor();
        cout << " - " << "Nome: " << destino.getNome().getValor();
        cout << " - " << "Data Inicio: " << destino.getDataIni().getValor();
        cout << " - " << "Data Fim: " << destino.getDataFim().getValor();
        return true;
    } else {
        cout << endl << "Destino nao encontrado.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para atualizar um destino no contêiner.
 * @return true se o destino foi atualizado com sucesso,
 * @return false se não foi.
 */
bool CntrIADestino::atualizar() {

    cout << endl << "Atualizacao de Destino." << endl << endl;

    Codigo codigo;
    Nome nome;
    Data data_ini;
    Data data_fim;

    string entrada;
    while(true) {
        try {
            cin.clear(); cin.ignore();
            cout << "Digite o codigo do destino: ";
                std::getline(std::cin, entrada);
                codigo.setValor(entrada);
            cout << "Digite o nome do destino: ";
                std::getline(std::cin, entrada);
                nome.setValor(entrada);
            cout << "Digite a data de inicio do destino: ";
                std::getline(std::cin, entrada);
                data_ini.setValor(entrada);
            cout << "Digite a data de fim do destino: ";
                std::getline(std::cin, entrada);
                data_fim.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Destino destino;
    destino.setCodigo(codigo);
    destino.setNome(nome);
    destino.setDataIni(data_ini);
    destino.setDataFim(data_fim);

    string erro = "";
    if (cntrISDestino->atualizar(destino, erro)) {
        cout << endl << "Destino atualizado com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na atualizacao do destino.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para excluir um destino no contêiner.
 * @return true se o destino foi excluído com sucesso,
 * @return false se não foi.
 */
bool CntrIADestino::excluir() {

    cout << endl << "Exclusao de Destino." << endl;

    Codigo codigo;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo do destino: ";
                cin >> entrada;
                codigo.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    cout << endl << "Voce realmente deseja excluir o destino (codigo: " << codigo.getValor() << ")?" << endl;
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
        if (cntrISDestino->excluir(codigo, erro)) {
            cout << endl << "Exclusao do destino realizada com sucesso." << endl;
            return true;
        } else {
            cout << endl << "Falha na exclusao do destino.";
            cout << endl << erro << endl;
            return false;
        }

    } else {
        cout << endl << "Exclusao nao confirmada." << endl;
        return false;
    }

}
