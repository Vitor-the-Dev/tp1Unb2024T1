#ifndef T_VIAGEM_HPP_INCLUDED
#define T_VIAGEM_HPP_INCLUDED

#include "../viagem.hpp"

class TUViagem {
    private:
            const string VALOR_VALIDO_CODIGO = "Aa123"; // Definição de constante para evitar número mágico.
            const string VALOR_VALIDO_NOME = "Nome Válido"; // Definição de constante para evitar número mágico.
            const static int VALOR_VALIDO_AVALIACAO = 3; // Definição de constante para evitar número mágico.
            Viagem *viagem; // Referência para unidade em teste.
            int estado; // Estado do teste.
            void setUp(); // Método para criar unidade em teste.
            void tearDown(); // Método para destruir unidade em teste.
            void testarCenario(); // Cenário de teste.
    public:
            const static int SUCESSO = 0; // Definição de constante para reportar resultado.
            const static int FALHA = -1; // Definição de constante para reportar resultado.
            int run(); // Método para executar teste.
};

#endif // T_VIAGEM_HPP_INCLUDED
