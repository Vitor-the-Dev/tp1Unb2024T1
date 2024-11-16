#include <string>
#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

class Senha {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //M�todo para validar valor.
    public:
            bool setValor(std::string); //M�todo para atribuir valor.
            std::string getValor() const; // M�todo para recuperar valor.
};

inline std::string Senha::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // SENHA_HPP_INCLUDED
