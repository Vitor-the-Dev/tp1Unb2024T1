#ifndef T_ATIVIDADE_HPP_INCLUDED
#define T_ATIVIDADE_HPP_INCLUDED

#include "../atividade.hpp"

class TUAtividade {
    private:
            const string VALOR_VALIDO_CODIGO = "Aa123"; // Definição de constante para evitar número mágico.
            const string VALOR_VALIDO_NOME = "Nome Válido"; // Definição de constante para evitar número mágico.
            const string VALOR_VALIDO_DATA = "29-02-24"; // Definição de constante para evitar número mágico.
            const string VALOR_VALIDO_HORARIO = "23:56"; // Definição de constante para evitar número mágico.
            const static int VALOR_VALIDO_DURACAO = 360; // Definição de constante para evitar número mágico.
            const static int VALOR_VALIDO_PRECO = 123456.78; // Definição de constante para evitar número mágico.
            const static int VALOR_VALIDO_AVALIACAO = 3; // Definição de constante para evitar número mágico.
            Atividade *atividade; // Referência para unidade em teste.
            int estado; // Estado do teste.
            void setUp(); // Método para criar unidade em teste.
            void tearDown(); // Método para destruir unidade em teste.
            void testarCenario(); // Cenário de teste.
    public:
            const static int SUCESSO = 0; // Definição de constante para reportar resultado.
            const static int FALHA = -1; // Definição de constante para reportar resultado.
            int run(); // Método para executar teste.
};

#endif // T_ATIVIDADE_HPP_INCLUDED
