#include <iostream>
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"
#include "../dominios/avaliacao.hpp"

#include "cntrdestino.hpp"

// Implementação de métodos da classe controladora.

bool CntrDestino::registrarDestino() {
    Nome nome;
    Data dataInicio;
    Data dataTermino;
    Avaliacao avaliacao;
    std::string entrada;
    int entradaInt;

    // Solicitar e validar entrada do usuário.
    while (true) {
        try {
            std::cout << "\nDefina um destino:\n" << std::endl;

            // Nome
            std::cout << "Digite o nome do destino: ";
            std::cin >> entrada;
            nome.setValor(entrada);

            // Data de início
            std::cout << "Digite a data de início (DD-MM-AA): ";
            std::cin >> entrada;
            dataInicio.setValor(entrada);

            // Data de término
            std::cout << "Digite a data de término (DD-MM-AA): ";
            std::cin >> entrada;
            dataTermino.setValor(entrada);

            // Avaliação
            std::cout << "Digite a avaliação (1 a 5): ";
            std::cin >> entradaInt;
            avaliacao.setValor(entradaInt);

            break; // Saia do loop se tudo for válido.
        } catch (const std::invalid_argument &exp) {
            std::cout << "\nDado em formato incorreto. Tente novamente.\n" << std::endl;
        }
    }

    // Simular registro de destino bem-sucedido.
    std::cout << "\nDestino registrado com sucesso:\n";
    std::cout << "Nome: " << nome.getValor() << "\n";
    std::cout << "Data de Início: " << dataInicio.getValor() << "\n";
    std::cout << "Data de Término: " << dataTermino.getValor() << "\n";
    std::cout << "Avaliação: " << avaliacao.getValor() << "\n";

    return true;
}
