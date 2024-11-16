#include <string>
#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

class Codigo {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //Método para validar valor.
    public:
            bool setValor(std::string); //Método para atribuir valor.
            std::string getValor() const; // Método para recuperar valor.
};

inline std::string Codigo::getValor() const { //Implementação de método
    return valor;
}

#endif // CODIGO_HPP_INCLUDED
