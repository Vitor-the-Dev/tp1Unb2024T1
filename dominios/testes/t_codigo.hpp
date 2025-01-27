#ifndef T_CODIGO_HPP_INCLUDED
#define T_CODIGO_HPP_INCLUDED

#include <stdexcept>
#include "../codigo.hpp"

using namespace std;

class TUCodigo {
    private:
            const string VALOR_VALIDO = "Aa123"; // Definição de constante para evitar número mágico.
            const string VALOR_INVALIDO = "Aa123!"; // Definição de constante para evitar número mágico.
            Codigo *codigo; // Referência para unidade em teste.
            int estado; // Estado do teste.
            void setUp(); // Método para criar unidade em teste.
            void tearDown(); // Método para destruir unidade em teste.
            void testarCenarioValorValido(); // Cenário de teste com valor válido.
            void testarCenarioValorInvalido(); // Cenário de teste com valor inválido.
    public:
            const static int SUCESSO = 0; // Definição de constante para reportar resultado.
            const static int FALHA = -1; // Definição de constante para reportar resultado.
            int run(); // Método para executar teste.
};

#endif // T_CODIGO_HPP_INCLUDED
