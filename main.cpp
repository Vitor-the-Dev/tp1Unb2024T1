#include <locale>
#include <iostream>
#include <windows.h> // Para SetConsoleOutputCP(CP_UTF8)
#include "controladoras/ciacontrole.hpp"
#include "controladoras/ciaautenticacao.hpp"
#include "controladoras/cisautenticacao.hpp"
#include "controladoras/ciaconta.hpp"
#include "controladoras/cisconta.hpp"
#include "controladoras/ciaviagem.hpp"
#include "controladoras/cisviagem.hpp"
#include "controladoras/ciadestino.hpp"
#include "controladoras/cisdestino.hpp"
#include "controladoras/ciahospedagem.hpp"
#include "controladoras/cishospedagem.hpp"
#include "controladoras/ciaatividade.hpp"
#include "controladoras/cisatividade.hpp"

/**
 * @brief Metodo responsável pela execução da aplicação.
 * @author Luiz Felippe Enéas - 170168221
 */
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

    IAViagem *cntrIAViagem = new CntrIAViagem();
        cntrApresentacaoControle->setCntrApresentacaoViagem(cntrIAViagem);
    ISViagem *cntrISViagem = new CntrISViagem();
        cntrIAViagem->setCntrISViagem(cntrISViagem);

    IADestino *cntrIADestino = new CntrIADestino();
        cntrApresentacaoControle->setCntrApresentacaoDestino(cntrIADestino);
    ISDestino *cntrISDestino = new CntrISDestino();
        cntrIADestino->setCntrISDestino(cntrISDestino);

    IAHospedagem *cntrIAHospedagem = new CntrIAHospedagem();
        cntrApresentacaoControle->setCntrApresentacaoHospedagem(cntrIAHospedagem);
    ISHospedagem *cntrISHospedagem = new CntrISHospedagem();
        cntrIAHospedagem->setCntrISHospedagem(cntrISHospedagem);

    IAAtividade *cntrIAAtividade = new CntrIAAtividade();
        cntrApresentacaoControle->setCntrApresentacaoAtividade(cntrIAAtividade);
    ISAtividade *cntrISAtividade = new CntrISAtividade();
        cntrIAAtividade->setCntrISAtividade(cntrISAtividade);

    //Executar Controle

    cntrApresentacaoControle->executar();

    // Destruir instâncias.

    delete cntrApresentacaoControle;
    delete cntrIAAutenticacao;
    delete cntrISAutenticacao;
    delete cntrIAConta;
    delete cntrISConta;
    delete cntrIADestino;
    delete cntrISDestino;
    delete cntrIAHospedagem;
    delete cntrISHospedagem;
    delete cntrIAAtividade;
    delete cntrISAtividade;

    return 0;
}
