#include "t_avaliacao.hpp"

void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}

void TUAvaliacao::testarCenarioValorValido(){
    try{
        avaliacao->setValor(VALOR_VALIDO);
        if (avaliacao->getValor() != VALOR_VALIDO)
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUAvaliacao::testarCenarioValorInvalido(){
    try{
        avaliacao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (avaliacao->getValor() == VALOR_INVALIDO)
        estado = FALHA;
    }
}

int TUAvaliacao::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
