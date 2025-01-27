#include "../containers/csconta.hpp"

bool ContainerConta::incluir(const Conta &conta) {
    // Verifica se j� existe conta com mesmo c�digo
    for (auto &c : contas) {
        if (c.getCodigo().getValor() == conta.getCodigo().getValor()) {
            return false;  // Conta duplicada
        }
    }
    contas.push_back(conta);
    return true;
}

bool ContainerConta::remover(const Codigo &codigo) {
    for (auto it = contas.begin(); it != contas.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            contas.erase(it);
            return true;
        }
    }
    return false;
}

bool ContainerConta::pesquisar(Conta *conta) {
    // Usa o codigo da conta passada por par�metro
    for (auto &c : contas) {
        if (c.getCodigo().getValor() == conta->getCodigo().getValor()) {
            *conta = c;    // Retorna a conta encontrada via par�metro
            return true;
        }
    }
    return false;
}

bool ContainerConta::atualizar(const Conta &conta) {
    for (auto &c : contas) {
        if (c.getCodigo().getValor() == conta.getCodigo().getValor()) {
            c = conta;     // Sobrescreve
            return true;
        }
    }
    return false;
}

