#include <string>
#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

class Codigo {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //M�todo para validar valor.
    public:
            bool setValor(std::string); //M�todo para atribuir valor.
            std::string getValor() const; // M�todo para recuperar valor.
};

inline std::string Codigo::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // CODIGO_HPP_INCLUDED
