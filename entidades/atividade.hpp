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
inline void Atividade::setCodigo(Codigo codigo){
    this->codigo = codigo;
}
inline Codigo Atividade::getCodigo() const{
    return codigo;
}

//set e get - Nome
inline void Atividade::setNome(Nome nome){
    this->nome = nome;
}
inline Nome Atividade::getNome() const{
    return nome;
}

//set e get - Data
inline void Atividade::setData(Data data){
    this->data = data;
}
inline Data Atividade::getData() const{
    return data;
}

//set e get - Horario
inline void Atividade::setHorario(Horario horario){
    this->horario = horario;
}
inline Horario Atividade::getHorario() const{
    return horario;
}

//set e get - Duracao
inline void Atividade::setDuracao(Duracao duracao){
    this->duracao = duracao;
}
inline Duracao Atividade::getDuracao() const{
    return duracao;
}

//set e get - Dinheiro
inline void Atividade::setPreco(Dinheiro preco){
    this->preco = preco;
}
inline Dinheiro Atividade::getPreco() const{
    return preco;
}

//set e get - Avaliacao
inline void Atividade::setAvaliacao(Avaliacao avaliacao){
    this->avaliacao = avaliacao;
}
inline Avaliacao Atividade::getAvaliacao() const{
    return avaliacao;
}

#endif // ATIVIDADE_HPP_INCLUDED
