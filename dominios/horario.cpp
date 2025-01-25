#include "horario.hpp"
#include <ctime>
#include <sstream>
#include <iomanip>

///
/// Valida o valor informado.
///

// M�todo para valida��o de valor.
void Horario::validar(string valor){
    tm date = {}; // Inicializa a estrutura tm
    istringstream iss(valor); // Usando istringstream para analisar a string
    iss >> get_time(&date, "%H:%M"); // Formato da data
    if (iss.fail())
        throw invalid_argument("Argumento invalido.");
}

///
/// Armazena o Hor�rio caso o valor informado seja v�lido.
///
/// Lan�a exce��o caso o valor informado seja inv�lido.
///
/// @param valor Hor�rio.
///
/// @throw invalid_argument
///

// M�todo para armazenamento de valor.
void Horario::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
