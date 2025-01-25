#ifndef VIAGEM_HPP_INCLUDED
#define VIAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

///
/// Padrão para representação da entidade Viagem.
///
/// Regras de formato:
///
/// - Entidade válida caso todos os atributos sejam válidos.
///
/// Autor: Vitor Carlos Fernandes - 190142332
///

//Declaração de classe
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
///
/// Atribui objeto codigo à entidade.
///
/// @param Codigo codigo
///

inline void Viagem::setCodigo(Codigo codigo){
    this->codigo = codigo;
}

///
/// Retorna objeto Código.
///
/// @return objeto Código.
///

inline Codigo Viagem::getCodigo() const{
    return codigo;
}

// set e get - Nome
///
/// Atribui objeto nome à entidade.
///
/// @param Nome nome
///

inline void Viagem::setNome(Nome nome){
    this->nome = nome;
}

///
/// Retorna objeto Nome.
///
/// @return objeto Nome.
///

inline Nome Viagem::getNome() const{
    return nome;
}

// set e get - Avaliacao
/// Atribui objeto avaliacao à entidade.
///
/// @param Avaliacao avaliacao
///

inline void Viagem::setAvaliacao(Avaliacao avaliacao){
    this->avaliacao = avaliacao;
}

///
/// Retorna objeto Avaliacao.
///
/// @return objeto Avaliacao.
///

inline Avaliacao Viagem::getAvaliacao() const{
    return avaliacao;
}

#endif // VIAGEM_HPP_INCLUDED
