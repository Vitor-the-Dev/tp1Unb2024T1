#ifndef DESTINO_HPP_INCLUDED
#define DESTINO_HPP_INCLUDED

using namespace std;

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
