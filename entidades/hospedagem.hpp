#ifndef HOSPEDAGEM_HPP_INCLUDED
#define HOSPEDAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

///
/// Padr�o para representa��o da entidade Hospedagem.
///
/// Regras de formato:
///
/// - Entidade v�lida caso todos os atributos sejam v�lidos.
///
/// Autor: Vitor Carlos Fernandes - 190142332
///

//Declara��o de classe
class Hospedagem {
    private:
            Codigo codigo;
            Nome nome;
            Dinheiro diaria;
            Avaliacao avaliacao;
    public:
            void setCodigo(Codigo);
            Codigo getCodigo() const;
            void setNome(Nome);
            Nome getNome() const;
            void setDiaria(Dinheiro);
            Dinheiro getDiaria() const;
            void setAvaliacao(Avaliacao);
            Avaliacao getAvaliacao() const;
};

//set e get - Codigo
///
/// Atribui objeto codigo � entidade.
///
/// @param Codigo codigo
///

inline void Hospedagem::setCodigo(Codigo codigo){
    this->codigo = codigo;
}

///
/// Retorna objeto C�digo.
///
/// @return objeto C�digo.
///

inline Codigo Hospedagem::getCodigo() const{
    return codigo;
}

//set e get - Nome
///
/// Atribui objeto nome � entidade.
///
/// @param Nome nome
///

inline void Hospedagem::setNome(Nome nome){
    this->nome = nome;
}

///
/// Retorna objeto Nome.
///
/// @return objeto Nome.
///

inline Nome Hospedagem::getNome() const{
    return nome;
}

//set e get - Diaria
///
/// Atribui objeto diaria � entidade.
///
/// @param Dinheiro diaria
///

inline void Hospedagem::setDiaria(Dinheiro diaria){
    this->diaria = diaria;
}

///
/// Retorna objeto Diaria.
///
/// @return objeto Diaria.
///

inline Dinheiro Hospedagem::getDiaria() const{
    return diaria;
}

//set e get - Avaliacao
/// Atribui objeto avaliacao � entidade.
///
/// @param Avaliacao avaliacao
///

inline void Hospedagem::setAvaliacao(Avaliacao avaliacao){
    this->avaliacao = avaliacao;
}

///
/// Retorna objeto Avaliacao.
///
/// @return objeto Avaliacao.
///

inline Avaliacao Hospedagem::getAvaliacao() const{
    return avaliacao;
}

#endif // HOSPEDAGEM_HPP_INCLUDED
