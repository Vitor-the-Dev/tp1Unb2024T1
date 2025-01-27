#include "t_viagem.hpp"

void TUViagem::setUp(){
    viagem = new Viagem();
    estado = SUCESSO;
}

void TUViagem::tearDown(){
    delete viagem;
}

void TUViagem::testarCenario(){

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    viagem->setCodigo(codigo);
    if(viagem->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    viagem->setNome(nome);
    if(viagem->getNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    viagem->setAvaliacao(avaliacao);
    if(viagem->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO)
		estado = FALHA;

}

int TUViagem::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
