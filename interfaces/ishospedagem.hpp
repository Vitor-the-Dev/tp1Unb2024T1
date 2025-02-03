#ifndef ISHOSPEDAGEM_HPP_INCLUDED
#define ISHOSPEDAGEM_HPP_INCLUDED

#include <list>
#include "../dominios/codigo.hpp"
#include "../entidades/hospedagem.hpp"

/**
 * @class ISHospedagem
 * @brief Interface para os servi�os de gerenciamento de hospedagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class ISHospedagem {
    public:
        virtual bool criar(const Hospedagem&, std::string&) = 0; // M�todo para solicitar o servi�o.
        virtual bool listar(std::list<Hospedagem>&, std::string&) = 0; // M�todo para solicitar o servi�o.
        virtual bool ler(Hospedagem&, std::string&) = 0; // M�todo para solicitar o servi�o.
        virtual bool atualizar(const Hospedagem&, std::string&) = 0; // M�todo para solicitar o servi�o.
        virtual bool excluir(const Codigo&, std::string&) = 0; // M�todo para solicitar o servi�o.
        virtual ~ISHospedagem(){} // M�todo destrutor virtual.
};

#endif // ISHOSPEDAGEM_HPP_INCLUDED
