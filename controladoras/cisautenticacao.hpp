#ifndef CISAUTENTICACAO_HPP_INCLUDED
#define CISAUTENTICACAO_HPP_INCLUDED

#include "../interfaces/isautenticacao.hpp"

using namespace std;

class CntrISAutenticacao: public ISAutenticacao {
    private:
    public:
        bool autenticar(const Codigo &codigo, const Senha &senha, string &erro) override;
};

#endif // CISAUTENTICACAO_HPP_INCLUDED
