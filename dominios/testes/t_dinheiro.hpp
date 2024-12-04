#ifndef T_DINHEIRO_HPP_INCLUDED
#define T_DINHEIRO_HPP_INCLUDED

#include <stdexcept>
#include "../dinheiro.hpp"

using namespace std;

class TUDinheiro {
    private:
            const static int VALOR_VALIDO = 123456.78; // Defini��o de constante para evitar n�mero m�gico.
            const static int VALOR_INVALIDO = -1; // Defini��o de constante para evitar n�mero m�gico.
            Dinheiro *dinheiro; // Refer�ncia para unidade em teste.
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

#endif // T_DINHEIRO_HPP_INCLUDED
