#ifndef T_DESTINO_HPP_INCLUDED
#define T_DESTINO_HPP_INCLUDED

#include "../destino.hpp"

class TUDestino {
    private:
            const string VALOR_VALIDO_CODIGO = "Aa123"; // Defini��o de constante para evitar n�mero m�gico.
            const string VALOR_VALIDO_NOME = "Nome V�lido"; // Defini��o de constante para evitar n�mero m�gico.
            const string VALOR_VALIDO_DATA = "29-02-24"; // Defini��o de constante para evitar n�mero m�gico.
            const static int VALOR_VALIDO_AVALIACAO = 3; // Defini��o de constante para evitar n�mero m�gico.
            Destino *destino; // Refer�ncia para unidade em teste.
            int estado; // Estado do teste.
            void setUp(); // M�todo para criar unidade em teste.
            void tearDown(); // M�todo para destruir unidade em teste.
            void testarCenario(); // Cen�rio de teste.
    public:
            const static int SUCESSO = 0; // Defini��o de constante para reportar resultado.
            const static int FALHA = -1; // Defini��o de constante para reportar resultado.
            int run(); // M�todo para executar teste.
};

#endif // T_DESTINO_HPP_INCLUDED
