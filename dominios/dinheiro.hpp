#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Dinheiro {
    private:
        float valor; ///< Atributo para armazenar o valor monetario.
        
        /// Valida o valor monetario, garantindo que esteja dentro do intervalo permitido.
        void validar(float);

    public:
        /// Atribui um valor monetario
        void setValor(float);

        /// Recupera o valor monetario atribuido.
        float getValor() const;
};

/// Implementacao inline de getValor.
/// @return O valor monetario armazenado.
inline float Dinheiro::getValor() const {
    return valor;
}

#endif // DINHEIRO_HPP_INCLUDED
