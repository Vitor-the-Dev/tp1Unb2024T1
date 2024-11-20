#include "horario.hpp"
#include <ctime>
#include <sstream>
#include <iomanip>

void Horario::validar(string valor){
    tm date = {}; // Inicializa a estrutura tm
    istringstream iss(valor); // Usando istringstream para analisar a string
    iss >> get_time(&date, "%H:%M"); // Formato da data
    if (iss.fail())
        throw invalid_argument("Argumento invalido.");
}

void Horario::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
