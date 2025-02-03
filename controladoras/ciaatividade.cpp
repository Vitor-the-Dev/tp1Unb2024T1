#include <iostream>
#include <string>
#include <limits> // Para std::numeric_limits
#include <list>
#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"
#include "../dominios/horario.hpp"
#include "../dominios/duracao.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/avaliacao.hpp"
#include "../entidades/atividade.hpp"
#include "ciaatividade.hpp"

// Implementações de métodos de classe controladora.

/**
 * @brief Solicita dados para criar uma nova atividade no contêiner.
 * @return true se a atividade foi incluída com sucesso,
 * @return false se já existir uma atividade com o mesmo código.
 */
bool CntrIAAtividade::criar() {

    cout << endl << "Criacao de Atividade." << endl << endl;

    Codigo codigo;
    Nome nome;
    Data data;
    Horario horario;
    Duracao duracao;
    Dinheiro preco;
    Avaliacao avaliacao;

    string entrada;
    int entrada_num;
    float entrada_float;
    while(true) {
        try {
            cin.clear(); cin.ignore();
            cout << "Digite o codigo da atividade: ";
                std::getline(std::cin, entrada);
                codigo.setValor(entrada);
            cout << "Digite o nome da atividade: ";
                std::getline(std::cin, entrada);
                nome.setValor(entrada);
            cout << "Digite a data da atividade: ";
                std::getline(std::cin, entrada);
                data.setValor(entrada);
            cout << "Digite o horario da atividade: ";
                std::getline(std::cin, entrada);
                horario.setValor(entrada);
            cout << "Digite a duracao da atividade: ";
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
            duracao.setValor(entrada_num);
            cout << "Digite o preco da atividade: ";
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
            preco.setValor(entrada_float);
            cout << "Digite a avaliacao da atividade: ";
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

    Atividade atividade;
    atividade.setCodigo(codigo);
    atividade.setNome(nome);
    atividade.setData(data);
    atividade.setHorario(horario);
    atividade.setDuracao(duracao);
    atividade.setPreco(preco);
    atividade.setAvaliacao(avaliacao);

    string erro = "";
    if (cntrISAtividade->criar(atividade, erro)) {
        cout << endl << "Criacao da atividade realizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na criacao da atividade.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita listar as atividades no contêiner.
 * @return true se foram listadas com sucesso,
 * @return false se não foram.
 */
bool CntrIAAtividade::listar() {

    cout << endl << "Listagem de Atividades." << endl;

    std::list<Atividade> atividades;

    string erro = "";
    if (cntrISAtividade->listar(atividades, erro)) {
        for (auto &atividade : atividades) {
            cout << endl << "Codigo: " << atividade.getCodigo().getValor();
            cout << " - " << "Nome: " << atividade.getNome().getValor();
            cout << " - " << "Data: " << atividade.getData().getValor();
            cout << " - " << "Horario: " << atividade.getHorario().getValor();
            cout << " - " << "Duracao: " << atividade.getDuracao().getValor();
            cout << " - " << "Preco: " << atividade.getPreco().getValor();
            cout << " - " << "Avaliacao: " << atividade.getAvaliacao().getValor();
        }
        return true;
    } else {
        cout << endl << "Falha na listagens das atividades.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para ler uma atividade no contêiner.
 * @return true se a atividade foi lida com sucesso,
 * @return false se não foi.
 */
bool CntrIAAtividade::ler() {

    cout << endl << "Consulta de Atividade." << endl << endl;

    Codigo codigo;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo da atividade: ";
                cin >> entrada;
                codigo.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Atividade atividade;
    atividade.setCodigo(codigo);

    string erro = "";
    if (cntrISAtividade->ler(atividade, erro)) {
        cout << endl << "Codigo: " << atividade.getCodigo().getValor();
        cout << " - " << "Nome: " << atividade.getNome().getValor();
        cout << " - " << "Data: " << atividade.getData().getValor();
        cout << " - " << "Horario: " << atividade.getHorario().getValor();
        cout << " - " << "Duracao: " << atividade.getDuracao().getValor();
        cout << " - " << "Preco: " << atividade.getPreco().getValor();
        cout << " - " << "Avaliacao: " << atividade.getAvaliacao().getValor();
        return true;
    } else {
        cout << endl << "Atividade nao encontrada.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para atualizar uma atividade no contêiner.
 * @return true se a atividade foi atualizada com sucesso,
 * @return false se não foi.
 */
bool CntrIAAtividade::atualizar() {

    cout << endl << "Atualizacao de Atividade." << endl << endl;

    Codigo codigo;
    Nome nome;
    Data data;
    Horario horario;
    Duracao duracao;
    Dinheiro preco;
    Avaliacao avaliacao;

    string entrada;
    int entrada_num;
    float entrada_float;
    while(true) {
        try {
            cin.clear(); cin.ignore();
            cout << "Digite o codigo da atividade: ";
                std::getline(std::cin, entrada);
                codigo.setValor(entrada);
            cout << "Digite o nome da atividade: ";
                std::getline(std::cin, entrada);
                nome.setValor(entrada);
            cout << "Digite a data da atividade: ";
                std::getline(std::cin, entrada);
                data.setValor(entrada);
            cout << "Digite o horario da atividade: ";
                std::getline(std::cin, entrada);
                horario.setValor(entrada);
            cout << "Digite a duracao da atividade: ";
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
            duracao.setValor(entrada_num);
            cout << "Digite o preco da atividade: ";
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
            preco.setValor(entrada_float);
            cout << "Digite a avaliacao da atividade: ";
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

    Atividade atividade;
    atividade.setCodigo(codigo);
    atividade.setNome(nome);
    atividade.setData(data);
    atividade.setHorario(horario);
    atividade.setDuracao(duracao);
    atividade.setPreco(preco);
    atividade.setAvaliacao(avaliacao);

    string erro = "";
    if (cntrISAtividade->atualizar(atividade, erro)) {
        cout << endl << "Atividade atualizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na atualizacao da atividade.";
        cout << endl << erro << endl;
        return false;
    }

}
/**
 * @brief Solicita dados para excluir uma atividade no contêiner.
 * @return true se a atividade foi excluída com sucesso,
 * @return false se não foi.
 */
bool CntrIAAtividade::excluir() {

    cout << endl << "Exclusao de Atividade." << endl;

    Codigo codigo;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo da atividade: ";
                cin >> entrada;
                codigo.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    cout << endl << "Voce realmente deseja excluir a atividade (codigo: " << codigo.getValor() << ")?" << endl;
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
        if (cntrISAtividade->excluir(codigo, erro)) {
            cout << endl << "Exclusao da atividade realizada com sucesso." << endl;
            return true;
        } else {
            cout << endl << "Falha na exclusao da atividade.";
            cout << endl << erro << endl;
            return false;
        }

    } else {
        cout << endl << "Exclusao nao confirmada." << endl;
        return false;
    }

}
