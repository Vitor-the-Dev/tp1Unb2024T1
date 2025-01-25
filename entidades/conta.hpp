#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"

using namespace std;

///
/// Padr�o para representa��o da entidade Conta.
///
/// Regras de formato:
///
/// - Entidade v�lida caso todos os atributos sejam v�lidos.
///
/// Autor: Davi Cesar Silva Borges - 190105054
///

//Declara��o de classe
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
///
/// Atribui objeto codigo � entidade.
///
/// @param Codigo codigo
///

inline void Conta::setCodigo(Codigo codigo){
    this->codigo = codigo;
}

///
/// Retorna objeto C�digo.
///
/// @return objeto C�digo.
///

inline Codigo Conta::getCodigo() const{
    return codigo;
}

// set e get - Senha.
///
/// Atribui objeto senha � entidade.
///
/// @param Senha senha
///

inline void Conta::setSenha(Senha senha){
    this->senha = senha;
}

///
/// Retorna objeto Senha.
///
/// @return objeto Senha.
///

inline Senha Conta::getSenha() const{
    return senha;
}

#endif // CONTA_HPP_INCLUDED
