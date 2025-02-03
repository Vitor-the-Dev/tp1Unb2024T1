#ifndef ISVIAGEM_HPP_INCLUDED
#define ISVIAGEM_HPP_INCLUDED

#include <list>
#include "../dominios/codigo.hpp"
#include "../entidades/viagem.hpp"

/**
 * @class ISViagem
 * @brief Interface para os serviços de gerenciamento de viagens.
 * @author Vitor Carlos Fernandes - 190142332
 */
class ISViagem {
    public:
        virtual bool criar(const Viagem&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar(std::list<Viagem>&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler(Viagem&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar(const Viagem&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir(const Codigo&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual ~ISViagem(){} // Método destrutor virtual.
};


#endif // ISVIAGEM_HPP_INCLUDED
