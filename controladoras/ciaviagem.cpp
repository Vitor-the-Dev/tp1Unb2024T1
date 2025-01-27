#include <iostream>
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"

#include "ciaviagem.hpp"

// Implementação de métodos da classe controladora.

bool CntrViagem::registrarViagem() {
    Nome nome;
    Avaliacao avaliacao;
    std::string entrada;
    int entradaInt;

    // Solicitar e validar entrada do usuário.
    while (true) {
        try {
            std::cout << "\nDefina uma viagem:\n" << std::endl;

            // Nome
            std::cout << "Digite o nome da viagem: ";
            std::cin >> entrada;
            nome.setValor(entrada);

            // Avaliação
            std::cout << "Digite a avaliação (1 a 5): ";
            std::cin >> entradaInt;
            avaliacao.setValor(entradaInt);

            break; // Saia do loop se tudo for válido.
        } catch (const std::invalid_argument &exp) {
            std::cout << "\nDado em formato incorreto. Tente novamente.\n" << std::endl;
        }
    }

    // Simular registro de viagem bem-sucedido.
    std::cout << "\nViagem registrada com sucesso:\n";
    std::cout << "Nome: " << nome.getValor() << "\n";
    std::cout << "Avaliação: " << avaliacao.getValor() << "\n";

    return true;
}

