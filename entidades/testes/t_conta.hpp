#ifndef T_CONTA_HPP_INCLUDED
#define T_CONTA_HPP_INCLUDED

#include "../conta.hpp"

class TUConta {
    private:
            const string VALOR_VALIDO_CODIGO = "Aa123"; // Definição de constante para evitar número mágico.
            const string VALOR_VALIDO_SENHA = "01235"; // Definição de constante para evitar número mágico.
            Conta *conta; // Referência para unidade em teste.
            int estado; // Estado do teste.
            void setUp(); // Método para criar unidade em teste.
            void tearDown(); // Método para destruir unidade em teste.
            void testarCenario(); // Cenário de teste.
    public:
            const static int SUCESSO = 0; // Definição de constante para reportar resultado.
            const static int FALHA = -1; // Definição de constante para reportar resultado.
            int run(); // Método para executar teste.
};

#endif // T_CONTA_HPP_INCLUDED
