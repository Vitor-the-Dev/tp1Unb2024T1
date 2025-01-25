#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"

using namespace std;

///
/// Padrão para representação da entidade Conta.
///
/// Regras de formato:
///
/// - Entidade válida caso todos os atributos sejam válidos.
///
/// Autor: Davi Cesar Silva Borges - 190105054
///

//Declaração de classe
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
/// Atribui objeto codigo à entidade.
///
/// @param Codigo codigo
///

inline void Conta::setCodigo(Codigo codigo){
    this->codigo = codigo;
}

///
/// Retorna objeto Código.
///
/// @return objeto Código.
///

inline Codigo Conta::getCodigo() const{
    return codigo;
}

// set e get - Senha.
///
/// Atribui objeto senha à entidade.
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
