#include "t_duracao.hpp"

void TUDuracao::setUp(){
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown(){
    delete duracao;
}

void TUDuracao::testarCenarioValorValido(){
    try{
        duracao->setValor(VALOR_VALIDO);
        if (duracao->getValor() != VALOR_VALIDO)
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioValorInvalido(){
    try{
        duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (duracao->getValor() == VALOR_INVALIDO)
        estado = FALHA;
    }
}

int TUDuracao::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
