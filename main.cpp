#include <locale>
#include <iostream>
#include <windows.h> // Para SetConsoleOutputCP(CP_UTF8)
#include "controladoras/ciacontrole.hpp"
#include "controladoras/ciaautenticacao.hpp"
#include "controladoras/cisautenticacao.hpp"
#include "controladoras/ciaconta.hpp"
#include "controladoras/cisconta.hpp"

using namespace std;

int main() {
    setlocale(LC_ALL, ".utf8");
    SetConsoleOutputCP(CP_UTF8); // Configurar UTF-8 no console do Windows
    SetConsoleCP(CP_UTF8); // Configura a entrada do console para UTF-8

    // Declarar, instanciar e ligar controladoras.

    CntrApresentacaoControle *cntrApresentacaoControle = new CntrApresentacaoControle();

    IAAutenticacao *cntrIAAutenticacao = new CntrIAAutenticacao();
        cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrIAAutenticacao);
    ISAutenticacao *cntrISAutenticacao = new CntrISAutenticacao();
        cntrIAAutenticacao->setCntrISAutenticacao(cntrISAutenticacao);

    IAConta *cntrIAConta = new CntrIAConta();
        cntrApresentacaoControle->setCntrApresentacaoConta(cntrIAConta);
    ISConta *cntrISConta = new CntrISConta();
        cntrIAConta->setCntrISConta(cntrISConta);

    //Executar Controle

    cntrApresentacaoControle->executar();

    // Destruir instâncias.

    delete cntrApresentacaoControle;
    delete cntrIAAutenticacao;
    delete cntrISAutenticacao;
    delete cntrIAConta;
    delete cntrISConta;

    return 0;
}
