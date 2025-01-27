#ifndef SISAUTENTICACAO_HPP_INCLUDED
#define SISAUTENTICACAO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"
#include "../interfaces/isautenticacao.hpp"

using namespace std;

// Declaração de stub que implementa interface da camada de serviço.

class StubISAutenticacao0:public ISAutenticacao{
public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    const string TRIGGER_FALHA        = "CODFLH";
    const string TRIGGER_ERRO_SISTEMA = "CODERR";

    // Declaração de método relacionado na interface.

    bool autenticar(const Codigo&, const Senha&) ;
};

#endif // SISAUTENTICACAO_HPP_INCLUDED
