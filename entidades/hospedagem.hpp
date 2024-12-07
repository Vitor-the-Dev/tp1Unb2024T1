#ifndef HOSPEDAGEM_HPP_INCLUDED
#define HOSPEDAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

///
/// Padrao para a representacao da hospedagem
///

class Hospedagem {
    private:
            Codigo codigo;
            Nome nome;
            Dinheiro diaria;
            Avaliacao avaliacao;
    public:
///
/// Atribui um codigo a hospedagem, caso esse seja valido
///
/// @param Codigo Hospedagem
///
            void setCodigo(Codigo);
///
/// Recupera o codigo atribuido a hospedagem
///
/// @return Codigo da hospedagem
///
            Codigo getCodigo() const;
///
/// Atribui um nome a hospedagem, caso esse seja valido
///
/// @param Nome Hospedagem
///
            void setNome(Nome);
///
/// Recupera o nome atribuido a hospedagem
///
/// @return Nome da hospedagem
///
            Nome getNome() const;
///
/// Atribui uma diaria a hospedagem, caso essa seja valida
///
/// @param diaria Hospedagem
///
            void setDiaria(Dinheiro);
///
/// Recupera a diaria atribuida a viagem
///
/// @return Diaria da hospedagem
///
            Dinheiro getDiaria() const;
///
/// Atribui uma avaliacao a hospedagem, caso essa seja valida
///
/// @param avaliacao Hospedagem
///
            void setAvaliacao(Avaliacao);
///
/// Recupera a avaliacao atribuida a hospedagem
///
/// @return Avaliacao da hospedagem
///
            Avaliacao getAvaliacao() const;
};

//set e get - Codigo
inline void Hospedagem::setCodigo(Codigo codigo){
    this->codigo = codigo;
}
inline Codigo Hospedagem::getCodigo() const{
    return codigo;
}

//set e get - Nome
inline void Hospedagem::setNome(Nome nome){
    this->nome = nome;
}
inline Nome Hospedagem::getNome() const{
    return nome;
}

//set e get - Diaria
inline void Hospedagem::setDiaria(Dinheiro diaria){
    this->diaria = diaria;
}
inline Dinheiro Hospedagem::getDiaria() const{
    return diaria;
}

//set e get - Avaliacao
inline void Hospedagem::setAvaliacao(Avaliacao avaliacao){
    this->avaliacao = avaliacao;
}
inline Avaliacao Hospedagem::getAvaliacao() const{
    return avaliacao;
}

#endif // HOSPEDAGEM_HPP_INCLUDED
