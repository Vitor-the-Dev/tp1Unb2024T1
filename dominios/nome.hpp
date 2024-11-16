#include <string>
#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

class Nome {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //Método para validar valor.
    public:
            bool setValor(std::string); //Método para atribuir valor.
            std::string getValor() const; // Método para recuperar valor.
};

inline std::string Nome::getValor() const { //Implementação de método
    return valor;
}

#endif // NOME_HPP_INCLUDED
