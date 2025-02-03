#ifndef ISDESTINO_HPP_INCLUDED
#define ISDESTINO_HPP_INCLUDED

#include <list>
#include "../dominios/codigo.hpp"
#include "../entidades/destino.hpp"

/**
 * @class ISDestino
 * @brief Interface para os serviços de gerenciamento de destinos.
 * @author Pedro Afonso Custódio de Lima - 232011350
 */
class ISDestino {
    public:
        virtual bool criar(const Destino&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool listar(std::list<Destino>&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool ler(Destino&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool atualizar(const Destino&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual bool excluir(const Codigo&, string&) = 0; // Método por meio do qual é solicitado o serviço.
        virtual ~ISDestino(){} // Método destrutor virtual.
};

#endif // ISDESTINO_HPP_INCLUDED
