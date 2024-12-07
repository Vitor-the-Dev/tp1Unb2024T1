#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padrão para a representação da duração.
///
class Duracao {
    private:
            ///
            /// Armazena o valor da duração (em alguma unidade definida pelo contexto da aplicação).
            ///
            int valor;

            ///
            /// Valida o valor da duração, garantindo que esteja dentro do formato permitido.
            ///
            /// @param valor Valor da duração a ser validado.
            /// @throws invalid_argument Caso o valor não obedeça as regras estabelecidas.
            ///
            void validar(int);

    public:
            ///
            /// Atribui um valor à duração, caso seja válido.
            ///
            /// @param valor Valor da duração.
            ///
            void setValor(int);

            ///
            /// Recupera o valor atribuído à duração.
            ///
            /// @return Valor da duração.
            ///
            int getValor() const;
};

inline int Duracao::getValor() const {
    return valor;
}

#endif // DURACAO_HPP_INCLUDED
