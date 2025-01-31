#include "cisautenticacao.hpp"
#include "../containers/cnconta.hpp"

using namespace std;

bool CntrISAutenticacao::autenticar(const Codigo &codigo, const Senha &senha, string &erro){

    // Instancia container de Contas.
    ContainerConta *containerConta = ContainerConta::getInstancia();

    // Instancia Conta a ser autenticada.
    Conta conta;
    conta.setCodigo(codigo);

    // Atualiza, via parâmetro, a Conta com o codigo informado
    if (!containerConta->ler(&conta)) {
        erro = "Erro: codigo nao localizado.";
        return false;
    } else {
        if (conta.getSenha().getValor() != senha.getValor()) {
            erro = "Erro: senha incorreta.";
            return false;
        }
    }

    return true;
}
