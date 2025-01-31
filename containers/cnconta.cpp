#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"
#include "../containers/cnconta.hpp"

// Implementação de instancia do container.

ContainerConta* ContainerConta::instancia = nullptr;
ContainerConta* ContainerConta::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerConta();
    return instancia;
}

// Implementações de métodos de classe container.

ContainerConta::ContainerConta() {
    // Simular conta já persistida no container
    Conta conta;
    Codigo codigo;
    Senha senha;
    codigo.setValor("ABC123"); // Valor válido
    senha.setValor("159951"); // Valor válido
    conta.setCodigo(codigo);
    conta.setSenha(senha);
    contas.push_back(conta);
}

bool ContainerConta::criar(const Conta &conta) {
    // Verifica se já existe conta com mesmo código
    for (auto &c : contas) {
        if (c.getCodigo().getValor() == conta.getCodigo().getValor()) {
            return false;  // Conta duplicada
        }
    }
    contas.push_back(conta);
    return true;
}

bool ContainerConta::ler(Conta *conta) {
    // Usa o codigo da conta passada por parâmetro
    for (auto &c : contas) {
        if (c.getCodigo().getValor() == conta->getCodigo().getValor()) {
            *conta = c;    // Retorna a conta encontrada via parâmetro
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

bool ContainerConta::excluir(const Codigo &codigo) {
    for (auto it = contas.begin(); it != contas.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            contas.erase(it);
            return true;
        }
    }
    return false;
}
