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
/// Padrao para a representacao da atividade
///

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
///
/// Atribui um codigo a atividade, caso esse seja valido
///
/// @param codigo Atividade
///
            void setCodigo(Codigo);
///
/// Recupera o codigo atribuido a atividade
///
/// @return Codigo da atividade
///
            Codigo getCodigo() const;
///
/// Atribui um nome a atividade, caso esse seja valido
///
/// @param nome atividade
///
            void setNome(Nome);
///
/// Recupera o nome atribuido a atividade
/// @return Nome da atividade
///
            Nome getNome() const;
///
/// Atruibui uma data a atividade, caso essa seja valida
///
/// @param data Atividade
///
            void setData(Data);
///
/// Recupera a data atribuida a atividade
///
/// @return Data da atividade
///
            Data getData() const;
///
/// Atribui um horario a atividade, caso esse seja valido
///
/// @param horario Atividade
///
            void setHorario(Horario);
///
/// Recupera o horario atribuido a atividade
///
/// @return Horario da atividade
///
            Horario getHorario() const;
///
/// Atribui uma duracao a atividade, caso essa seja valida
///
/// @param duracao Atividade
///
            void setDuracao(Duracao);
///
/// Recupera a duracao atribuida ativade
///
/// @return Duracao da atividade
///
            Duracao getDuracao() const;
///
/// Atribui um preco a atividade, caso esse seja valido
///
/// @param preco Atividade
///
            void setPreco(Dinheiro);
///
/// Recupera o preco atribuido a atividade
///
/// @return Preco da atividade
///
            Dinheiro getPreco() const;
///
/// Atribui uma avaliacao a atividade, caso essa seja valida
///
/// @param avaliacao Atividade
///
            void setAvaliacao(Avaliacao);
///
/// Recupera a avalicao atribuida a atividade
///
/// @return Avaliacao da atividade
///
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
