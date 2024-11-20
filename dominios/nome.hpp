#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Nome {
    private:
            string valor; //Atributo para armazenar valor.
            void validar(string); //Método para validar valor.
    public:
            void setValor(string); //Método para atribuir valor.
            string getValor() const; // Método para recuperar valor.
};

inline string Nome::getValor() const { //Implementação de método
    return valor;
}

#endif // NOME_HPP_INCLUDED
