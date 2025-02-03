#ifndef ISCONTA_HPP_INCLUDED
#define ISCONTA_HPP_INCLUDED

#include <list>
#include <vector>
#include "../dominios/codigo.hpp"
#include "../entidades/conta.hpp"
#include "../entidades/viagem.hpp"

/**
 * @class ISConta
 * @brief Interface para os serviços de gerenciamento de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class ISConta {
    public:
        virtual bool criar(const Conta&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar(std::list<Conta>&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler(Conta&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar(const Conta&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir(const Codigo&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool adicionarViagemParaConta(const Conta&, const Viagem&, string&) = 0;
        virtual bool listarViagensPorConta(const Conta&, std::vector<Viagem>&, string&) = 0;
        virtual bool removerViagemDeConta(const Conta&, const Viagem&, string&) = 0;
        virtual ~ISConta(){} // Método destrutor virtual.
};

#endif // ISCONTA_HPP_INCLUDED
