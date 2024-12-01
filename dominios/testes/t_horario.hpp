#ifndef T_HORARIO_HPP_INCLUDED
#define T_HORARIO_HPP_INCLUDED

#include <stdexcept>
#include "../horario.hpp"

using namespace std;

class TUHorario {
    private:
            const string VALOR_VALIDO = "23:56"; // Defini��o de constante para evitar n�mero m�gico.
            const string VALOR_INVALIDO = "22:60"; // Defini��o de constante para evitar n�mero m�gico.
            Horario *horario; // Refer�ncia para unidade em teste.
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

#endif // T_HORARIO_HPP_INCLUDED
