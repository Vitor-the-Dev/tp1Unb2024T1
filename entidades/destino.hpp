#ifndef DESTINO_HPP_INCLUDED
#define DESTINO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

///
/// Padrão para representação da entidade Destino.
///
/// Regras de formato:
///
/// - Entidade válida caso todos os atributos sejam válidos.
///
/// Autor: Pedro Afonso Custódio de Lima - 232011350
///

//Declaração de classe
class Destino {
    private:
            Codigo codigo;
            Nome nome;
            Data data_ini;
            Data data_fim;
            Avaliacao avaliacao;
    public:
            void setCodigo(Codigo);
            Codigo getCodigo() const;
            void setNome(Nome);
            Nome getNome() const;
            void setDataIni(Data);
            Data getDataIni() const;
            void setDataFim(Data);
            Data getDataFim() const;
            void setAvaliacao(Avaliacao);
            Avaliacao getAvaliacao() const;
};

//set e get - Codigo
///
/// Atribui objeto codigo à entidade.
///
/// @param Codigo codigo
///

inline void Destino::setCodigo(Codigo codigo){
    this->codigo = codigo;
}

///
/// Retorna objeto Código.
///
/// @return objeto Código.
///

inline Codigo Destino::getCodigo() const{
    return codigo;
}

//set e get - Nome
///
/// Atribui objeto nome à entidade.
///
/// @param Nome nome
///

inline void Destino::setNome(Nome nome){
    this->nome = nome;
}

///
/// Retorna objeto Nome.
///
/// @return objeto Nome.
///

inline Nome Destino::getNome() const{
    return nome;
}

//set e get - DataIni
///
/// Atribui objeto data_ini à entidade.
///
/// @param Data data_ini
///

inline void Destino::setDataIni(Data data_ini){
    this->data_ini = data_ini;
}

///
/// Retorna objeto DataIni.
///
/// @return objeto DataIni.
///

inline Data Destino::getDataIni() const{
    return data_ini;
}

//set e get - DataFim
///
/// Atribui objeto data_fim à entidade.
///
/// @param Data data_fim
///

inline void Destino::setDataFim(Data data_fim){
    this->data_fim = data_fim;
}

///
/// Retorna objeto DataFim.
///
/// @return objeto DataFim.
///

inline Data Destino::getDataFim() const{
    return data_fim;
}

//set e get - Avaliacao
/// Atribui objeto avaliacao à entidade.
///
/// @param Avaliacao avaliacao
///

inline void Destino::setAvaliacao(Avaliacao avaliacao){
    this->avaliacao = avaliacao;
}

///
/// Retorna objeto Avaliacao.
///
/// @return objeto Avaliacao.
///

inline Avaliacao Destino::getAvaliacao() const{
    return avaliacao;
}

#endif // DESTINO_HPP_INCLUDED
