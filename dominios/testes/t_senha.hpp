#ifndef T_SENHA_HPP_INCLUDED
#define T_SENHA_HPP_INCLUDED

#include <stdexcept>
#include "../senha.hpp"

using namespace std;

class TUSenha {
    private:
            const string VALOR_VALIDO = "01235"; // Defini��o de constante para evitar n�mero m�gico.
            const string VALOR_INVALIDO = "01234"; // Defini��o de constante para evitar n�mero m�gico.
            Senha *senha; // Refer�ncia para unidade em teste.
            int estado; // Estado do teste.
            void setUp(); // M�todo para criar unidade em teste.
            void tearDown(); // M�todo para destruir unidade em teste.
            void testarCenarioValorValido(); // Cen�rio de teste com valor v�lido.
            void testarCenarioValorInvalido(); // Cen�rio de teste com valor inv�lido.
    public:
            const static int SUCESSO = 0; // Defini��o de constante para reportar resultado.
            const static int FALHA = -1; // Defini��o de constante para reportar resultado.
            int run(); // M�todo para executar teste.
};

#endif // T_SENHA_HPP_INCLUDED
