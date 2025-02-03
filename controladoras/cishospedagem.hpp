#ifndef CISHOSPEDAGEM_HPP_INCLUDED
#define CISHOSPEDAGEM_HPP_INCLUDED

#include "../interfaces/ishospedagem.hpp"

/**
 * @class CntrISHospedagem
 * @brief Implementação dos serviços de gerenciamento de hospedagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class CntrISHospedagem: public ISHospedagem {
    public:
        bool criar(const Hospedagem &hospedagem, std::string &erro) override;
        bool listar(std::list<Hospedagem> &hospedagens, std::string &erro) override;
        bool ler(Hospedagem &hospedagem, std::string &erro) override;
        bool atualizar(const Hospedagem &hospedagem, std::string &erro) override;
        bool excluir(const Codigo &codigo, std::string &erro) override;
};

#endif // CISHOSPEDAGEM_HPP_INCLUDED
