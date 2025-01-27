#include "t_dinheiro.hpp"

void TUDinheiro::setUp(){
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}

void TUDinheiro::tearDown(){
    delete dinheiro;
}

void TUDinheiro::testarCenarioValorValido(){
    try{
        dinheiro->setValor(VALOR_VALIDO);
        if (dinheiro->getValor() != VALOR_VALIDO)
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioValorInvalido(){
    try{
        dinheiro->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dinheiro->getValor() == VALOR_INVALIDO)
        estado = FALHA;
    }
}

int TUDinheiro::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
