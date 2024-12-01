#include "t_hospedagem.hpp"

void TUHospedagem::setUp(){
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown(){
    delete hospedagem;
}

void TUHospedagem::testarCenario(){

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    hospedagem->setCodigo(codigo);
    if(hospedagem->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    hospedagem->setNome(nome);
    if(hospedagem->getNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Dinheiro diaria;
    diaria.setValor(VALOR_VALIDO_DIARIA);
    hospedagem->setDiaria(diaria);
    if(hospedagem->getDiaria().getValor() != VALOR_VALIDO_DIARIA)
		estado = FALHA;

    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    hospedagem->setAvaliacao(avaliacao);
    if(hospedagem->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO)
		estado = FALHA;

}

int TUHospedagem::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
