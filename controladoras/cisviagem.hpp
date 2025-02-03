#ifndef CISVIAGEM_HPP_INCLUDED
#define CISVIAGEM_HPP_INCLUDED

#include "../interfaces/isviagem.hpp"

/**
 * @class CntrISViagem
 * @brief Implementação dos serviços de gerenciamento de viagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class CntrISViagem: public ISViagem {
    public:
        bool criar(const Viagem &viagem, string &erro) override;
        bool listar(std::list<Viagem> &viagens, string &erro) override;
        bool ler(Viagem &viagem, string &erro) override;
        bool atualizar(const Viagem &viagem, string &erro) override;
        bool excluir(const Codigo &codigo, string &erro) override;
};

#endif // CISVIAGEM_HPP_INCLUDED
