#include "horario.hpp"
#include <ctime>
#include <sstream>
#include <iomanip>


/// Valida o valor do horario, garantindo que esteja dentro do formato permitido.
/// @param valor O valor String do horario a ser validado.
/// @throws std::invalid_argument Se o valor nao estiver no formato HH-MM
void Horario::validar(string valor){
    tm date = {}; // Inicializa a estrutura tm
    istringstream iss(valor); // Usando istringstream para analisar a string
    iss >> get_time(&date, "%H:%M"); // Formato da data
    if (iss.fail())
        throw invalid_argument("Argumento invalido.");
}

/// Atribui um valor para o horario apos valida-lo.
/// @param valor O valor String do horario a ser validado e atribuido.
/// @throws std::invalid_argument Se o valor nao estiver no formato HH-MM atraves do metodo validar
void Horario::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
