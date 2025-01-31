#ifndef CISCONTA_HPP_INCLUDED
#define CISCONTA_HPP_INCLUDED

#include "../interfaces/isconta.hpp"

using namespace std;

class CntrISConta: public ISConta {
    private:
    public:
        bool criar(const Conta &conta, string &erro) override;
        bool ler(Conta &conta, string &erro) override;
        bool atualizar(const Conta &conta, string &erro) override;
        bool excluir(const Codigo &codigo, string &erro) override;
};

#endif // CISCONTA_HPP_INCLUDED
