#include "t_data.hpp"

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioValorValido(){
    try{
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioValorInvalido(){
    try{
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getValor() == VALOR_INVALIDO)
        estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
