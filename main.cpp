#include <locale>
#include <iostream>
#include <windows.h> // Para SetConsoleOutputCP(CP_UTF8)
#include <stdexcept>
#include "dominios/codigo.hpp"
#include "controladoras/ciacontrole.hpp"
#include "controladoras/ciaautenticacao.hpp"
#include "stubs/sisautenticacao.hpp"

using namespace std;

int main() {
    setlocale(LC_ALL, ".utf8");
    SetConsoleOutputCP(CP_UTF8); // Configurar UTF-8 no console do Windows
    SetConsoleCP(CP_UTF8); // Configura a entrada do console para UTF-8

    // Declarar e instanciar controladoras.

    CntrApresentacaoControle *cntrApresentacaoControle = new CntrApresentacaoControle();
    IAAutenticacao *cntrIAAutenticacao = new CntrIAAutenticacao();

    // Declarar e instanciar stubs.

    ISAutenticacao *stubISAutenticacao = new StubISAutenticacao();

    // Ligar controladoras e stub.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrIAAutenticacao);
    cntrIAAutenticacao->setCntrISAutenticacao(stubISAutenticacao);


    cntrApresentacaoControle->executar();

    // Destruir instâncias.

    delete cntrApresentacaoControle;
    delete cntrIAAutenticacao;
    delete stubISAutenticacao;
/*

    bool resultado;

    Codigo codigo;

    while(true){

        // Simular apresentação de autenticação do sistema.

        cout << endl << "Tela de autenticação." << endl;
        try{
            // Soliciatar serviço de autenticação.
            resultado = cntrIAAutenticacao->autenticar(&codigo);
        }
        catch(const runtime_error &exp){
            cout << "Erro de sistema." << endl;
            break;
        }

        // Criticar resultado da autenticação.
        if(resultado) {
            cout << endl << "Sucesso autenticacao." << endl;
            cout << endl << "Codigo = " << codigo.getValor() << endl;
            break;
        }
        else {
            cout << endl << "Erro autenticacao." << endl;
            break;
        }
    }
*/
    return 0;
}
