#include <string>
#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

class Nome {
    private:
            std::string valor; //Atributo para armazenar valor.
            bool validar(std::string); //M�todo para validar valor.
    public:
            bool setValor(std::string); //M�todo para atribuir valor.
            std::string getValor() const; // M�todo para recuperar valor.
};

inline std::string Nome::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // NOME_HPP_INCLUDED
