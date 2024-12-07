#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padrao para a representacao do nome
///
class Nome {
    private:
            ///
            /// Armazena o valor do nome.
            ///
            string valor;

            ///
            /// Valida o valor do nome conforme as regras definidas.
            ///
            /// @param valor Valor do nome a ser validado.
            /// @throws invalid_argument Caso o valor não obedeça as regras de formatação.
            ///
            void validar(string);
    public:
            ///
            /// Atribui um valor ao nome, caso seja válido.
            ///
            /// @param valor Valor do nome.
            ///
            void setValor(string);

            ///
            /// Recupera o valor atribuído ao nome.
            ///
            /// @return Valor do nome.
            ///
            string getValor() const;
};

inline string Nome::getValor() const {
    return valor;
}

#endif // NOME_HPP_INCLUDED
