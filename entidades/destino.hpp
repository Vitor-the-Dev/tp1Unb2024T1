#ifndef DESTINO_HPP_INCLUDED
#define DESTINO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

///
/// Padrao para a representacao do destino
///

class Destino {
    private:
            Codigo codigo;
            Nome nome;
            Data data_ini;
            Data data_fim;
            Avaliacao avaliacao;
    public:
///
/// Atribui um codigo ao destino, caso esse seja valdio
///
/// @param Codigo Destino
///
            void setCodigo(Codigo);
///
/// Recupera o codigo atribuido ao destino
///
/// @return Codigo do destino
///
            Codigo getCodigo() const;
///
/// Atribui um nome ao destino, caso esse seja valido
///
/// @param Nome Destino
///
            void setNome(Nome);
///
/// Recupera o nome atribuido ao destino
///
/// @return Nome do destino
///
            Nome getNome() const;
///
/// Atribui a data de chegada ao destino, caso essa seja valida
///
/// @param Data de chegada ao Destino
///
            void setDataIni(Data);
///
/// Recupera a data da chegada ao destino
///
/// @return Data inicial do destino
///
            Data getDataIni() const;
///
/// Atribui a data de saida do destino, caso essa seja valida
///
/// @param Data de saida do destino
///
            void setDataFim(Data);
///
/// Recupera a data da saida do destino
///
/// @return Data final do destino
///
            Data getDataFim() const;
///
/// Atribui uma avaliacao ao destino
///
/// @param Avalicao Destino
///
            void setAvaliacao(Avaliacao);
///
/// Recupera a avaliacao atribuiada ao destino
///
/// @return Avaliacao do destino
///
            Avaliacao getAvaliacao() const;
};

//set e get - Codigo
inline void Destino::setCodigo(Codigo codigo){
    this->codigo = codigo;
}
inline Codigo Destino::getCodigo() const{
    return codigo;
}

//set e get - Nome
inline void Destino::setNome(Nome nome){
    this->nome = nome;
}
inline Nome Destino::getNome() const{
    return nome;
}

//set e get - DataIni
inline void Destino::setDataIni(Data data_ini){
    this->data_ini = data_ini;
}
inline Data Destino::getDataIni() const{
    return data_ini;
}

//set e get - DataFim
inline void Destino::setDataFim(Data data_fim){
    this->data_fim = data_fim;
}
inline Data Destino::getDataFim() const{
    return data_fim;
}

//set e get - Avaliacao
inline void Destino::setAvaliacao(Avaliacao avaliacao){
    this->avaliacao = avaliacao;
}
inline Avaliacao Destino::getAvaliacao() const{
    return avaliacao;
}

#endif // DESTINO_HPP_INCLUDED
