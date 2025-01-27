#ifndef T_CONTA_HPP_INCLUDED
#define T_CONTA_HPP_INCLUDED

#include "../conta.hpp"

class TUConta {
    private:
            const string VALOR_VALIDO_CODIGO = "Aa123"; // Defini��o de constante para evitar n�mero m�gico.
            const string VALOR_VALIDO_SENHA = "01235"; // Defini��o de constante para evitar n�mero m�gico.
            Conta *conta; // Refer�ncia para unidade em teste.
            int estado; // Estado do teste.
            void setUp(); // M�todo para criar unidade em teste.
            void tearDown(); // M�todo para destruir unidade em teste.
            void testarCenario(); // Cen�rio de teste.
    public:
            const static int SUCESSO = 0; // Defini��o de constante para reportar resultado.
            const static int FALHA = -1; // Defini��o de constante para reportar resultado.
            int run(); // M�todo para executar teste.
};

#endif // T_CONTA_HPP_INCLUDED
