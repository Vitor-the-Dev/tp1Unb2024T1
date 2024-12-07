#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

///
/// Padrao para a representacao da senha
///
class Senha {
    private:
            ///
            /// Armazena o valor da senha.
            ///
            string valor;
            
            ///
            /// Valida a senha conforme as regras definidas.
            ///
            /// @param valor Valor da senha a ser validada.
            /// @throws invalid_argument Caso o valor não obedeça as regras de formatação.
            ///
            void validar(string);
    public:
            ///
            /// Atribui um valor a senha, caso esse seja valido.
            ///
            /// @param valor Valor da senha.
            ///
            void setValor(string);

            ///
            /// Recupera o valor atribuido a senha.
            ///
            /// @return Valor da senha.
            ///
            string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

#endif // SENHA_HPP_INCLUDED
