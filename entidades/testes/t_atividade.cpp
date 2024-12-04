#include "t_atividade.hpp"

void TUAtividade::setUp(){
    atividade = new Atividade();
    estado = SUCESSO;
}

void TUAtividade::tearDown(){
    delete atividade;
}

void TUAtividade::testarCenario(){

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    atividade->setCodigo(codigo);
    if(atividade->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    atividade->setNome(nome);
    if(atividade->getNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Data data;
    data.setValor(VALOR_VALIDO_DATA);
    atividade->setData(data);
    if(atividade->getData().getValor() != VALOR_VALIDO_DATA)
        estado = FALHA;

    Horario horario;
    horario.setValor(VALOR_VALIDO_HORARIO);
    atividade->setHorario(horario);
    if(atividade->getHorario().getValor() != VALOR_VALIDO_HORARIO)
        estado = FALHA;

    Duracao duracao;
    duracao.setValor(VALOR_VALIDO_DURACAO);
    atividade->setDuracao(duracao);
    if(atividade->getDuracao().getValor() != VALOR_VALIDO_DURACAO)
		estado = FALHA;

    Dinheiro preco;
    preco.setValor(VALOR_VALIDO_PRECO);
    atividade->setPreco(preco);
    if(atividade->getPreco().getValor() != VALOR_VALIDO_PRECO)
		estado = FALHA;

    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    atividade->setAvaliacao(avaliacao);
    if(atividade->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO)
		estado = FALHA;

}

int TUAtividade::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
