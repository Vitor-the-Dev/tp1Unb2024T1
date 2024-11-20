#include <iostream>
#include <stdexcept>
#include <locale>
#include "dominios/avaliacao.hpp"
#include "dominios/codigo.hpp"
#include "dominios/data.hpp"
#include "dominios/dinheiro.hpp"
#include "dominios/duracao.hpp"
#include "dominios/horario.hpp"
#include "dominios/nome.hpp"
#include "dominios/senha.hpp"
#include "entidades/conta.hpp"
#include "entidades/viagem.hpp"
#include "entidades/atividade.hpp"
#include "entidades/destino.hpp"
#include "entidades/hospedagem.hpp"

using namespace std;

int main() {
    setlocale(LC_ALL,"");

    /* DOMÍNIOS */

    /*
    Avaliacao avaliacao;

    try {
        avaliacao.setValor(3); //Escolher valor válido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        avaliacao.setValor(10); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }
    */

    /*
    Codigo codigo;

    try {
        codigo.setValor("Aa123"); //Escolher valor válido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        codigo.setValor("Aa123!"); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }
    */

    /*
    Data data;

    try {
        data.setValor("29-02-24"); //Escolher valor válido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        data.setValor("29-02-23"); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        data.setValor("31-04-24"); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }
    */

    /*
    Dinheiro dinheiro;

    try {
        dinheiro.setValor(123456.78); //Escolher valor válido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        dinheiro.setValor(-1); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }
    */

    /*
    Duracao duracao;

    try {
        duracao.setValor(360); //Escolher valor válido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        duracao.setValor(720); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }
    */

    /*
    Horario horario;

    try {
        horario.setValor("23:56"); //Escolher valor válido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        horario.setValor("22:60"); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        horario.setValor("25:25"); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }
    */

    /*
    Nome nome;

    try {
        nome.setValor("Nome Válido"); //Escolher valor válido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        nome.setValor("Nome inválido por grande excesso de caracteres."); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }
    */

    /*
    Senha senha;

    try {
        senha.setValor("01235"); //Escolher valor válido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }

    try {
        senha.setValor("01234"); //Escolher valor inválido.
    }
    catch(invalid_argument &exp){
        cout << "Excecao : " << exp.what() << endl;
    }
    */

    /* ENTIDADES */

    /* //Atividade
    Codigo codigo;
        codigo.setValor("Abc123");
    Nome nome;
        nome.setValor("Nome Atividade");
    Data data;
        data.setValor("01-01-24");
    Horario horario;
        horario.setValor("10:10");
    Duracao duracao;
        duracao.setValor(360);
    Dinheiro preco;
        preco.setValor(200000);
    Avaliacao avaliacao;
        avaliacao.setValor(5);

    Atividade atividade;
        atividade.setCodigo(codigo);
    cout << atividade.getCodigo().getValor() << endl;
        atividade.setNome(nome);
    cout << atividade.getNome().getValor() << endl;
        atividade.setData(data);
    cout << atividade.getData().getValor() << endl;
        atividade.setHorario(horario);
    cout << atividade.getHorario().getValor() << endl;
        atividade.setDuracao(duracao);
    cout << atividade.getDuracao().getValor() << endl;
        atividade.setPreco(preco);
    cout << atividade.getPreco().getValor() << endl;
        atividade.setAvaliacao(avaliacao);
    cout << atividade.getAvaliacao().getValor() << endl;
    */

    /*//Conta
    Codigo codigo;
        codigo.setValor("Abc123");
    Senha senha;
        senha.setValor("01235");

    Conta conta;
        conta.setCodigo(codigo);
    cout << conta.getCodigo().getValor() << endl;
        conta.setSenha(senha);
    cout << conta.getSenha().getValor() << endl;
    */

    /* //Destino
    Codigo codigo;
        codigo.setValor("Abc123");
    Nome nome;
        nome.setValor("Nome Destino");
    Data data_ini;
        data_ini.setValor("01-01-24");
    Data data_fim;
        data_fim.setValor("02-01-24");
    Avaliacao avaliacao;
        avaliacao.setValor(5);

    Destino destino;
        destino.setCodigo(codigo);
    cout << destino.getCodigo().getValor() << endl;
        destino.setNome(nome);
    cout << destino.getNome().getValor() << endl;
        destino.setDataIni(data_ini);
    cout << destino.getDataIni().getValor() << endl;
        destino.setDataFim(data_fim);
    cout << destino.getDataFim().getValor() << endl;
        destino.setAvaliacao(avaliacao);
    cout << destino.getAvaliacao().getValor() << endl;
    */

    /* //Hospedagem
    Codigo codigo;
        codigo.setValor("Abc123");
    Nome nome;
        nome.setValor("Nome Hospedagem");
    Dinheiro diaria;
        diaria.setValor(200000);
    Avaliacao avaliacao;
        avaliacao.setValor(5);

    Hospedagem hospedagem;
        hospedagem.setCodigo(codigo);
    cout << hospedagem.getCodigo().getValor() << endl;
        hospedagem.setNome(nome);
    cout << hospedagem.getNome().getValor() << endl;
        hospedagem.setDiaria(diaria);
    cout << hospedagem.getDiaria().getValor() << endl;
        hospedagem.setAvaliacao(avaliacao);
    cout << hospedagem.getAvaliacao().getValor() << endl;
    */

    /* //Viagem
    Codigo codigo;
        codigo.setValor("Abc123");
    Nome nome;
        nome.setValor("João da Silva");
    Avaliacao avaliacao;
        avaliacao.setValor(3);

    Viagem viagem;
        viagem.setCodigo(codigo);
    cout << viagem.getCodigo().getValor() << endl;
        viagem.setNome(nome);
    cout << viagem.getNome().getValor() << endl;
        viagem.setAvaliacao(avaliacao);
    cout << viagem.getAvaliacao().getValor() << endl;
    */

    return 0;
}
