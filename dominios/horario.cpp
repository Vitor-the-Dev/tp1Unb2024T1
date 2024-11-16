#include "horario.hpp"
#include <ctime>
#include <sstream>
#include <iomanip>

bool Horario::validar(std::string valor){
    std::tm date = {}; // Inicializa a estrutura tm
    std::istringstream iss(valor); // Usando std::istringstream para analisar a string
    iss >> std::get_time(&date, "%H:%M"); // Formato da data
    if (iss.fail())
        return false;
    return true;
}

bool Horario::setValor(std::string valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
