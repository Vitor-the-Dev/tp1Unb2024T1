#ifndef HOSPEDAGEM_HPP_INCLUDED
#define HOSPEDAGEM_HPP_INCLUDED

using namespace std;

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
