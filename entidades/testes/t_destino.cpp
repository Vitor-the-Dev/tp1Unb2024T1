#include "t_destino.hpp"

void TUDestino::setUp(){
    destino = new Destino();
    estado = SUCESSO;
}

void TUDestino::tearDown(){
    delete destino;
}

void TUDestino::testarCenario(){

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    destino->setCodigo(codigo);
    if(destino->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    destino->setNome(nome);
    if(destino->getNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Data data_ini;
    data_ini.setValor(VALOR_VALIDO_DATA);
    destino->setDataIni(data_ini);
    if(destino->getDataIni().getValor() != VALOR_VALIDO_DATA)
        estado = FALHA;

    Data data_fim;
    data_fim.setValor(VALOR_VALIDO_DATA);
    destino->setDataFim(data_fim);
    if(destino->getDataFim().getValor() != VALOR_VALIDO_DATA)
        estado = FALHA;

    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    destino->setAvaliacao(avaliacao);
    if(destino->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO)
		estado = FALHA;

}

int TUDestino::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
