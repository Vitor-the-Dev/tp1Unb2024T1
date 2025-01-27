#include <iostream>
#include "sisautenticacao.hpp"
#include "../entidades/conta.hpp"

using namespace std;

StubISAutenticacao::StubISAutenticacao() {
    try {
        // Conta 1
        Conta conta1;
        Codigo cod1;
        cod1.setValor("ABC123");   // Valor válido
        Senha sen1;
        sen1.setValor("159951");    // Valor válido
        conta1.setCodigo(cod1);
        conta1.setSenha(sen1);
        container.incluir(conta1);

        // Conta 2
        Conta conta2;
        Codigo cod2;
        cod2.setValor("ZZZ999");   // Valor válido
        Senha sen2;
        sen2.setValor("753357");    // Valor válido
        conta2.setCodigo(cod2);
        conta2.setSenha(sen2);
        container.incluir(conta2);

    }
    catch(const invalid_argument &exp) {
        cout << "Erro ao popular StubISAutenticacao: " << exp.what() << endl;
    }
}

// Implementação do método de autenticação.
bool StubISAutenticacao::autenticar(const Codigo &codigo, const Senha &senha){

    cout << endl << "StubISAutenticacao::autenticar" << endl;
    cout << "Codigo = " << codigo.getValor() << endl;
    cout << "Senha  = " << senha.getValor() << endl;

    // Verifica gatilhos especiais:
    if (codigo.getValor() == TRIGGER_FALHA) {
        // Gatilho de falha proposital.
        return false;
    }
    if (codigo.getValor() == TRIGGER_ERRO_SISTEMA) {
        throw runtime_error("Erro de sistema");
    }

    // Cria uma Conta apenas com o código que queremos pesquisar.
    Conta contaPesquisa;
    contaPesquisa.setCodigo(codigo);

    // Tenta pesquisar no container
    if (container.pesquisar(&contaPesquisa)) {

        if (contaPesquisa.getSenha().getValor() == senha.getValor()) {
            // Autenticação bem-sucedida
            return true;
        }
        else {
            // Conta existe, mas senha diferente
            return false;
        }
    }

    // Se não achou a conta, falha na autenticação
    return false;
}
