#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Nome {
    private:
            /// Valida e armazena um valor para nome
            string valor; //Atributo para armazenar valor.
            void validar(string); //M�todo para validar valor.
    public:
            /// Atribui um valor para nome
            void setValor(string); //M�todo para atribuir valor.
            /// Recupera valor atribuido
            string getValor() const; // M�todo para recuperar valor.
};

inline string Nome::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // NOME_HPP_INCLUDED
