#include <algorithm> // Necessário para std::find
#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"
#include "../containers/cnconta.hpp"

// Implementação de instancia do container.
/**
 * @brief Instancia ContainerConta.
 * @author Davi Cesar Silva Borges - 190105054
 */
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
    codigo.setValor("CNT000"); // Valor válido
    senha.setValor("13579"); // Valor válido
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

bool ContainerConta::listar(std::list<Conta> *listaContas) {
    // Usa listaContas passada por parâmetro
    if (contas.size() > 0) {
        *listaContas = contas;    // Retorna Contas encontradas via parâmetro
        return true;
    }
    return false;
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

void ContainerConta::adicionarViagemParaConta(const Conta& conta, const Viagem& viagem) {
    //conta_viagens[conta].push_back(viagem);
}

std::vector<Viagem> ContainerConta::getViagensPorConta(const Conta& conta) const {
    /*auto it = conta_viagens.find(conta);
    if (it != conta_viagens.end()) {
        return it->second;
    }*/
    return {};
}

/**
 * @brief Remove uma viagem associada a uma conta.
 */
bool ContainerConta::removerViagemDeConta(const Conta& conta, const Viagem& viagem) {
    /*auto it = conta_viagens.find(conta);

    // Verifica se a conta tem viagens associadas
    if (it == conta_viagens.end()) {
        return false; // Conta não encontrada
    }

    std::vector<Viagem>& viagens = it->second;

    // Busca a viagem dentro da lista da conta
    auto viagemIt = std::find(viagens.begin(), viagens.end(), viagem);
    if (viagemIt == viagens.end()) {
        return false; // Viagem não encontrada
    }

    viagens.erase(viagemIt); // Remove a viagem

    // Se a conta ficar sem viagens, podemos removê-la do mapa (opcional)
    if (viagens.empty()) {
        conta_viagens.erase(it);
    }*/

    return true; // Sucesso
}
