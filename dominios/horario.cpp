#include "horario.hpp"
#include <ctime>
#include <sstream>
#include <iomanip>

///
/// Valida o valor informado.
///

// Método para validação de valor.
void Horario::validar(string valor){
    tm date = {}; // Inicializa a estrutura tm
    istringstream iss(valor); // Usando istringstream para analisar a string
    iss >> get_time(&date, "%H:%M"); // Formato da data
    if (iss.fail())
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena o Horário caso o valor informado seja válido.
///
/// Lança exceção caso o valor informado seja inválido.
///
/// @param valor Horário.
///
/// @throw invalid_argument
///

// Método para armazenamento de valor.
void Horario::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
