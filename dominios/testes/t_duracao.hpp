#ifndef T_DURACAO_HPP_INCLUDED
#define T_DURACAO_HPP_INCLUDED

#include <stdexcept>
#include "../duracao.hpp"

using namespace std;

class TUDuracao {
    private:
            const static int VALOR_VALIDO = 360; // Definição de constante para evitar número mágico.
            const static int VALOR_INVALIDO = 720; // Definição de constante para evitar número mágico.
            Duracao *duracao; // Referência para unidade em teste.
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

#endif // T_DURACAO_HPP_INCLUDED
