#ifndef CISCONTA_HPP_INCLUDED
#define CISCONTA_HPP_INCLUDED

#include "../interfaces/isconta.hpp"

/**
 * @class CntrISConta
 * @brief Implementação dos serviços de gerenciamento de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class CntrISConta: public ISConta {
    public:
        bool criar(const Conta &conta, string &erro) override;
        bool listar(std::list<Conta> &contas, string &erro) override;
        bool ler(Conta &conta, string &erro) override;
        bool atualizar(const Conta &conta, string &erro) override;
        bool excluir(const Codigo &codigo, string &erro) override;
        bool adicionarViagemParaConta(const Conta &conta, const Viagem &viagem, string &erro) override;
        bool removerViagemDeConta(const Conta &conta, const Viagem &viagem, string &erro) override;
        bool listarViagensPorConta(const Conta &conta, std::vector<Viagem> &viagens, string &erro) override;
};

#endif // CISCONTA_HPP_INCLUDED
