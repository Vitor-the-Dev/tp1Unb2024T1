#include <string>
#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

class Data {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //M�todo para validar valor.
    public:
            bool setValor(std::string); //M�todo para atribuir valor.
            std::string getValor() const; // M�todo para recuperar valor.
};

inline std::string Data::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DATA_HPP_INCLUDED
