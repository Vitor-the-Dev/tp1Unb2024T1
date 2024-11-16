#include <string>
#ifndef HORARIO_HPP_INCLUDED
#define HORARIO_HPP_INCLUDED

class Horario {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //M�todo para validar valor.
    public:
            bool setValor(std::string); //M�todo para atribuir valor.
            std::string getValor() const; // M�todo para recuperar valor.
};

inline std::string Horario::getValor() const { //Implementa��o de m�todo
    return valor;
}
#endif // HORARIO_HPP_INCLUDED
