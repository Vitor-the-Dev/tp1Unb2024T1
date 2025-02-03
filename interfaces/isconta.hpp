#ifndef ISCONTA_HPP_INCLUDED
#define ISCONTA_HPP_INCLUDED

#include <list>
#include <vector>
#include "../dominios/codigo.hpp"
#include "../entidades/conta.hpp"
#include "../entidades/viagem.hpp"

/**
 * @class ISConta
 * @brief Interface para os servi�os de gerenciamento de contas.
 * @author Davi Cesar Silva Borges - 190105054
 */
class ISConta {
    public:
        virtual bool criar(const Conta&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool listar(std::list<Conta>&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool ler(Conta&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool atualizar(const Conta&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool excluir(const Codigo&, string&) = 0; // M�todo por meio do qual � solicitado o servi�o.
        virtual bool adicionarViagemParaConta(const Conta&, const Viagem&, string&) = 0;
        virtual bool listarViagensPorConta(const Conta&, std::vector<Viagem>&, string&) = 0;
        virtual bool removerViagemDeConta(const Conta&, const Viagem&, string&) = 0;
        virtual ~ISConta(){} // M�todo destrutor virtual.
};

#endif // ISCONTA_HPP_INCLUDED
