#ifndef VIAGEM_HPP_INCLUDED
#define VIAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

class Viagem {
    private:
            Codigo codigo;
            Nome nome;
            Avaliacao avaliacao;
    public:
            void setCodigo(Codigo);
            Codigo getCodigo() const;
            void setNome(Nome);
            Nome getNome() const;
            void setAvaliacao(Avaliacao);
            Avaliacao getAvaliacao() const;
};

// set e get - Codigo
inline void Viagem::setCodigo(Codigo codigo){
    this->codigo = codigo;
}
inline Codigo Viagem::getCodigo() const{
    return codigo;
}

// set e get - Nome
inline void Viagem::setNome(Nome nome){
    this->nome = nome;
}
inline Nome Viagem::getNome() const{
    return nome;
}

// set e get - Avaliacao
inline void Viagem::setAvaliacao(Avaliacao avaliacao){
    this->avaliacao = avaliacao;
}
inline Avaliacao Viagem::getAvaliacao() const{
    return avaliacao;
}

#endif // VIAGEM_HPP_INCLUDED
