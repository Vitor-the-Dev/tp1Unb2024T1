#ifndef IAATIVIDADE_HPP_INCLUDED
#define IAATIVIDADE_HPP_INCLUDED

#include "../dominios/codigo.hpp"

class ISAtividade;

class IAAtividade {
    public:
        virtual bool novaAtividade(Codigo*) = 0; // Request the service.
        virtual void setCntrISAtividade(ISAtividade*) = 0; // Establish the service link.
        virtual ~IAAtividade() {}
};

#endif // IAATIVIDADE_HPP_INCLUDED