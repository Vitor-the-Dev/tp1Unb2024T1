#include "t_conta.hpp"

void TUConta::setUp(){
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown(){
    delete conta;
}

void TUConta::testarCenario(){

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    conta->setCodigo(codigo);
    if(conta->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Senha senha;
    senha.setValor(VALOR_VALIDO_SENHA);
    conta->setSenha(senha);
    if(conta->getSenha().getValor() != VALOR_VALIDO_SENHA)
        estado = FALHA;

}

int TUConta::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
