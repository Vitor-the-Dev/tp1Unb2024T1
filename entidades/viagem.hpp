#ifndef VIAGEM_HPP_INCLUDED
#define VIAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;
///
/// Padrao para a representacao da viagem
///

class Viagem {
    private:
            Codigo codigo;
            Nome nome;
            Avaliacao avaliacao;
    public:
///
/// Atribui um codigo a viagem, caso esse seja valido
///
/// @param codigo Viagem
///
            void setCodigo(Codigo);
///
/// Recupera o codigo atribuido a viagem
///
/// @return Codigo da viagem
///
            Codigo getCodigo() const;
///
/// Atribui um nome a viagem, caso esse seja valido
///
/// @param nome Viagem
///
            void setNome(Nome);
///
/// Recupera o nome atruibuido a viagem
///
/// @return Nome da viagem
///
            Nome getNome() const;
///
/// Atribui uma avaliacao a viagem, caso essa seja valida
///
/// @param avaliacao Viagem
///
            void setAvaliacao(Avaliacao);
///
/// Recupera a avaliacao atribuida a viagem
///
/// @return Avalaiacao da viagem
///
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
