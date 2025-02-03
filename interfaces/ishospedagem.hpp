#ifndef ISHOSPEDAGEM_HPP_INCLUDED
#define ISHOSPEDAGEM_HPP_INCLUDED

#include <list>
#include "../dominios/codigo.hpp"
#include "../entidades/hospedagem.hpp"

/**
 * @class ISHospedagem
 * @brief Interface para os serviços de gerenciamento de hospedagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class ISHospedagem {
    public:
        virtual bool criar(const Hospedagem&, std::string&) = 0; // Método para solicitar o serviço.
        virtual bool listar(std::list<Hospedagem>&, std::string&) = 0; // Método para solicitar o serviço.
        virtual bool ler(Hospedagem&, std::string&) = 0; // Método para solicitar o serviço.
        virtual bool atualizar(const Hospedagem&, std::string&) = 0; // Método para solicitar o serviço.
        virtual bool excluir(const Codigo&, std::string&) = 0; // Método para solicitar o serviço.
        virtual ~ISHospedagem(){} // Método destrutor virtual.
};

#endif // ISHOSPEDAGEM_HPP_INCLUDED
