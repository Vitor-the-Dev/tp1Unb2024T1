#include "data.hpp"
#include <ctime>
#include <sstream>
#include <iomanip>

bool isLeapYear(int year) {
    // Retorna verdadeiro se o ano for bissexto
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void Data::validar(string valor){
    // Cria a data no fomato DD-MM-AA
    tm date = {}; // Inicializa a estrutura tm
    istringstream iss(valor); // Usando istringstream para analisar a string
    iss >> get_time(&date, "%d-%m-%y"); // Formato da data
    date.tm_year += 100;
    if (iss.fail())
        throw invalid_argument("Argumento invalido.");
    // Verifica o número de dias em cada mês
    if (date.tm_mon == 1) { // Fevereiro
        if (date.tm_mday > (isLeapYear(date.tm_year) ? 29 : 28)) {
            throw invalid_argument("Argumento invalido.");
        }
    } else if (date.tm_mon == 3 || date.tm_mon == 5 || date.tm_mon == 8 || date.tm_mon == 10) { // Meses com 30 dias
        if (date.tm_mday > 30) {
            throw invalid_argument("Argumento invalido.");
        }
    }
}

void Data::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
