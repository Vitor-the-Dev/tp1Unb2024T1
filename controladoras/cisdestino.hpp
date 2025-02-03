#ifndef CISDESTINO_HPP_INCLUDED
#define CISDESTINO_HPP_INCLUDED

#include "../interfaces/isdestino.hpp"

/**
 * @class CntrISDestino
 * @brief Implementação dos serviços de gerenciamento de destinos.
 * @author Pedro Afonso Custódio de Lima - 232011350
 */
class CntrISDestino: public ISDestino {
    public:
        bool criar(const Destino &destino, string &erro) override;
        bool listar(std::list<Destino> &destinos, string &erro) override;
        bool ler(Destino &destino, string &erro) override;
        bool atualizar(const Destino &destino, string &erro) override;
        bool excluir(const Codigo &codigo, string &erro) override;
};

#endif // CISDESTINO_HPP_INCLUDED
