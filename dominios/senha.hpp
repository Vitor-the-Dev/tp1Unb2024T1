#include <string>
#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

class Senha {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //Método para validar valor.
    public:
            bool setValor(std::string); //Método para atribuir valor.
            std::string getValor() const; // Método para recuperar valor.
};

inline std::string Senha::getValor() const { //Implementação de método
    return valor;
}

#endif // SENHA_HPP_INCLUDED
