#include <string>
#ifndef HORARIO_HPP_INCLUDED
#define HORARIO_HPP_INCLUDED

class Horario {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //Método para validar valor.
    public:
            bool setValor(std::string); //Método para atribuir valor.
            std::string getValor() const; // Método para recuperar valor.
};

inline std::string Horario::getValor() const { //Implementação de método
    return valor;
}
#endif // HORARIO_HPP_INCLUDED
