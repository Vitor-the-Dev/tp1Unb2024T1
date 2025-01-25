#ifndef T_HORARIO_HPP_INCLUDED
#define T_HORARIO_HPP_INCLUDED

#include <stdexcept>
#include "../horario.hpp"

using namespace std;

class TUHorario {
    private:
            const string VALOR_VALIDO = "23:56"; // Definição de constante para evitar número mágico.
            const string VALOR_INVALIDO = "22:60"; // Definição de constante para evitar número mágico.
            Horario *horario; // Referência para unidade em teste.
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

#endif // T_HORARIO_HPP_INCLUDED
