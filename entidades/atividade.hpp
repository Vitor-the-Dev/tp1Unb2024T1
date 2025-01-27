#ifndef ATIVIDADE_HPP_INCLUDED
#define ATIVIDADE_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"
#include "../dominios/horario.hpp"
#include "../dominios/duracao.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

///
/// Padrão para representação da entidade Atividade.
///
/// Regras de formato:
///
/// - Entidade válida caso todos os atributos sejam válidos.
///
/// Autor: Luiz Felippe Enéas - 170168221
///

//Declaração de classe
class Atividade {
    private:
            Codigo codigo;
            Nome nome;
            Data data;
            Horario horario;
            Duracao duracao;
            Dinheiro preco;
            Avaliacao avaliacao;
    public:
            void setCodigo(Codigo);
            Codigo getCodigo() const;
            void setNome(Nome);
            Nome getNome() const;
            void setData(Data);
            Data getData() const;
            void setHorario(Horario);
            Horario getHorario() const;
            void setDuracao(Duracao);
            Duracao getDuracao() const;
            void setPreco(Dinheiro);
            Dinheiro getPreco() const;
            void setAvaliacao(Avaliacao);
            Avaliacao getAvaliacao() const;
};

//set e get - Codigo
///
/// Atribui objeto codigo à entidade.
///
/// @param Codigo codigo
///

inline void Atividade::setCodigo(Codigo codigo){
    this->codigo = codigo;
}

///
/// Retorna objeto Código.
///
/// @return objeto Código.
///

inline Codigo Atividade::getCodigo() const{
    return codigo;
}

//set e get - Nome
///
/// Atribui objeto nome à entidade.
///
/// @param Nome nome
///

inline void Atividade::setNome(Nome nome){
    this->nome = nome;
}

///
/// Retorna objeto Nome.
///
/// @return objeto Nome.
///

inline Nome Atividade::getNome() const{
    return nome;
}

//set e get - Data
///
/// Atribui objeto data à entidade.
///
/// @param Data data
///

inline void Atividade::setData(Data data){
    this->data = data;
}

///
/// Retorna objeto Data.
///
/// @return objeto Data.
///

inline Data Atividade::getData() const{
    return data;
}

//set e get - Horario
///
/// Atribui objeto horario à entidade.
///
/// @param Horario horario
///

inline void Atividade::setHorario(Horario horario){
    this->horario = horario;
}

///
/// Retorna objeto Horario.
///
/// @return objeto Horario.
///

inline Horario Atividade::getHorario() const{
    return horario;
}

//set e get - Duracao
///
/// Atribui objeto duracao à entidade.
///
/// @param Duracao duracao
///

inline void Atividade::setDuracao(Duracao duracao){
    this->duracao = duracao;
}

///
/// Retorna objeto Duracao.
///
/// @return objeto Duracao.
///

inline Duracao Atividade::getDuracao() const{
    return duracao;
}

//set e get - Preco
///
/// Atribui objeto preco à entidade.
///
/// @param Dinheiro preco
///

inline void Atividade::setPreco(Dinheiro preco){
    this->preco = preco;
}

///
/// Retorna objeto Preco.
///
/// @return objeto Preco.
///

inline Dinheiro Atividade::getPreco() const{
    return preco;
}

//set e get - Avaliacao
///
/// Atribui objeto avaliacao à entidade.
///
/// @param Avaliacao avaliacao
///

inline void Atividade::setAvaliacao(Avaliacao avaliacao){
    this->avaliacao = avaliacao;
}

///
/// Retorna objeto Avaliacao.
///
/// @return objeto Avaliacao.
///

inline Avaliacao Atividade::getAvaliacao() const{
    return avaliacao;
}

#endif // ATIVIDADE_HPP_INCLUDED
