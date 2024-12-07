#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"

using namespace std;

///
///Padrao para a representacao da conta
///

class Conta {
    private:
            Codigo codigo;
            Senha senha;
    public:
///
/// Atribui um codigo a conta, caso esse seja valido
///
/// @param codigo Conta
///
            void setCodigo(Codigo);
///
/// Recupera o codigo da atribuido a conta
///
/// @return Codigo da conta
///
            Codigo getCodigo() const;
///
/// Atribui uma senha a conta, caso essa seja valida
///
/// @param senha Conta
///
            void setSenha(Senha);
///
/// Recupera a senha atribuida a conta
///
/// @return Senha da conta
///
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
