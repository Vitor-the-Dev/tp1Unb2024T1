#ifndef ISATIVIDADE_HPP_INCLUDED
#define ISATIVIDADE_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"
#include "../dominios/horario.hpp"
#include "../dominios/duracao.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/avaliacao.hpp"

class ISAtividade {
    public:
        virtual bool novaAtividade(const Codigo&, const Nome&, const Data&, const Horario&, const Duracao&, const Dinheiro&, const Avaliacao&) = 0;
        virtual ~ISAtividade() {}
};

#endif // ISATIVIDADE_HPP_INCLUDED