#ifndef HORARIO_HPP_INCLUDED
#define HORARIO_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padrão para a representação de um horário.
///
class Horario {
    private:
            ///
            /// Armazena o valor do horário.
            ///
            string valor;

            ///
            /// Valida o valor do horário conforme as regras definidas.
            ///
            /// @param valor Valor do horário a ser validado.
            /// @throws invalid_argument Caso o valor não obedeça as regras de formatação.
            ///
            void validar(string);

    public:
            ///
            /// Atribui um valor ao horário, caso seja válido.
            ///
            /// @param valor Valor do horário.
            ///
            void setValor(string);

            ///
            /// Recupera o valor atribuído ao horário.
            ///
            /// @return Valor do horário.
            ///
            string getValor() const;
};

inline string Horario::getValor() const {
    return valor;
}

#endif // HORARIO_HPP_INCLUDED
