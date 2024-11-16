#include <string>
#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

class Data {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //Método para validar valor.
    public:
            bool setValor(std::string); //Método para atribuir valor.
            std::string getValor() const; // Método para recuperar valor.
};

inline std::string Data::getValor() const { //Implementação de método
    return valor;
}

#endif // DATA_HPP_INCLUDED
