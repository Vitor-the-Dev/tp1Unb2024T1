#ifndef SISAUTENTICACAO_HPP_INCLUDED
#define SISAUTENTICACAO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"
#include "../interfaces/isautenticacao.hpp"

using namespace std;

// Declara��o de stub que implementa interface da camada de servi�o.

class StubISAutenticacao0:public ISAutenticacao{
public:

    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    const string TRIGGER_FALHA        = "CODFLH";
    const string TRIGGER_ERRO_SISTEMA = "CODERR";

    // Declara��o de m�todo relacionado na interface.

    bool autenticar(const Codigo&, const Senha&) ;
};

#endif // SISAUTENTICACAO_HPP_INCLUDED
