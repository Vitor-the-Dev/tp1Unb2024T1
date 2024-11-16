#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED

using namespace std;

class Conta {
    private:
            Codigo codigo;
            Senha senha;
    public:
            void setCodigo(Codigo);
            Codigo getCodigo() const;
            void setSenha(Senha);
            Senha getSenha() const;
};

// set e get - Codigo.
inline void Conta::setCodigo(Codigo codigo){
    this->codigo = codigo;
}
inline Codigo Conta::getCodigo() const{
    return codigo;
}

// set e get - atributo.
inline void Conta::setSenha(Senha senha){
    this->senha = senha;
}
inline Senha Conta::getSenha() const{
    return senha;
}

#endif // CONTA_HPP_INCLUDED
