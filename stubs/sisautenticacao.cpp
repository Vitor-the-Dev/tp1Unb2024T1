#include <iostream>
#include "sisautenticacao.hpp"

using namespace std;

// Defini��es de constantes.

//const string StubISAutenticacao::TRIGGER_FALHA;
//const string StubISAutenticacao::TRIGGER_ERRO_SISTEMA;

// Implementa��o de m�todo.

bool StubISAutenticacao::autenticar(const Codigo &codigo, const Senha &senha){

    // Apresentar dados recebidos.

    cout << endl << "StubISAutenticacao::autenticar" << endl ;

    cout << "Codigo = " << codigo.getValor() << endl ;
    cout << "Senha = " << senha.getValor() << endl ;

    // Diferentes comportamentos dependendo do valor da matr�cula.

    /*switch(codigo.getValor()){
        case TRIGGER_FALHA:
            return false;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
        }*/
    if (codigo.getValor() == TRIGGER_FALHA) {
        return false;
    } else
    if (codigo.getValor() == TRIGGER_ERRO_SISTEMA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}
