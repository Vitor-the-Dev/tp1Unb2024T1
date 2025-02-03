#include <iostream>
#include <limits> // Para std::numeric_limits
#include <list>
#include "../dominios/senha.hpp"
#include "../entidades/conta.hpp"
#include "ciaconta.hpp"

// Implementações de métodos de classe controladora.

/**
 * @brief Solicita dados para criar uma nova conta no contêiner.
 * @return true se a conta foi incluída com sucesso,
 * @return false se já existir uma conta com o mesmo código.
 */
bool CntrIAConta::criar(Codigo *codigo) {

    cout << endl << "Criacao de Conta." << endl << endl;

    Senha senha;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo da Conta: ";
                cin >> entrada;
                codigo->setValor(entrada);
            cout << "Digite a senha: ";
                cin >> entrada;
                senha.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Conta conta;
    conta.setCodigo(*codigo);
    conta.setSenha(senha);

    string erro = "";
    if (cntrISConta->criar(conta, erro)) {
        cout << endl << "Criacao da conta realizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na criacao da conta.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita listar as viagens no contêiner.
 * @return true se foram listadas com sucesso,
 * @return false se não foram.
 */
bool CntrIAConta::listar() {

    cout << endl << "Listagem de Contas." << endl << endl;

    std::list<Conta> contas;

    string erro = "";
    if (cntrISConta->listar(contas, erro)) {
        for (auto &conta : contas) {
            cout << endl << "Codigo: " << conta.getCodigo().getValor();
        }
        return true;
    } else {
        cout << endl << "Falha na listagens das contas.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para ler uma conta no contêiner.
 * @return true se a conta foi lida com sucesso,
 * @return false se não foi.
 */
bool CntrIAConta::ler(Codigo *codigo) {

    cout << endl << "Consulta de Conta." << endl << endl;

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
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    conta.setCodigo(codigo1);

    // Solicitar verificacao da conta.

    string erro = "";
    if (cntrISConta->ler(conta, erro)) {
        cout << endl << "Consulta da conta realizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na verificacao da conta.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para atualizar uma conta no contêiner.
 * @return true se a conta foi atualizada com sucesso,
 * @return false se não foi.
 */
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
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    conta.setSenha(senha);

    // Solicitar atualizacao da conta.

    string erro = "";
    if (cntrISConta->atualizar(conta, erro)) {
        cout << endl << "Atualizacao da conta realizada com sucesso." << endl;
        return true;
    } else {
        cout << endl << "Falha na atualizacao da conta.";
        cout << endl << erro << endl;
        return false;
    }

}

/**
 * @brief Solicita dados para excluir uma conta no contêiner.
 * @return true se a conta foi excluída com sucesso,
 * @return false se não foi.
 */
bool CntrIAConta::excluir(Codigo *codigo) {

    cout << endl << "Exclusao de Conta." << endl;

    // Solicitar confirmacao da exclusao da conta.

    cout << endl << "Voce realmente deseja excluir a sua conta (codigo: " << codigo->getValor() << ")?" << endl;
    cout << "1. Sim.";
    cout << "2. Nao.";
    cout << "Opcao: ";

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

        string erro = "";
        if (cntrISConta->excluir(*codigo, erro)) {
            cout << endl << "Exclusao da conta realizada com sucesso." << endl;
            return true;
        } else {
            cout << endl << "Falha na exclusao da conta.";
            cout << endl << erro << endl;
            return false;
        }

    } else {
        cout << endl << "Exclusao nao confirmada." << endl;
        return false;
    }

}

/**
 * @brief Lista as viagens associadas a uma conta.
 */
bool CntrIAConta::listarViagensPorConta(Codigo* codigoConta) {

    cout << endl << "Viagens vinculadas a Conta." << endl;

    vector<Viagem> viagens;
    string erro;

    Conta conta;
    conta.setCodigo(*codigoConta);

    if (!cntrISConta->listarViagensPorConta(conta, viagens, erro)) {
        cout << erro << endl;
        return false;
    }

    for (const auto& viagem : viagens) {
        cout << "Código: " << viagem.getCodigo().getValor() << ", Nome: " << viagem.getNome().getValor() << endl;
    }

    return true;
}

/**
 * @brief Adiciona uma viagem a uma conta.
 */
bool CntrIAConta::adicionarViagemParaConta(Codigo* codigoConta) {

    cout << endl << "Vincular Viagem a Conta." << endl;

    Conta conta;
    conta.setCodigo(*codigoConta);

    Codigo codigoViagem;

    string entrada;
    while(true) {
        try {
            cout << "Digite o codigo da viagem: ";
                cin >> entrada;
                codigoViagem.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Valor informado em formato incorreto." << endl;
        }
    }

    Viagem viagem;
    viagem.setCodigo(codigoViagem);

    string erro;
    if (!cntrISConta->adicionarViagemParaConta(conta, viagem, erro)) {
        cout << erro << endl;
        return false;
    }

    cout << endl << "Viagem adicionada com sucesso a conta!" << endl;
    return true;
}
