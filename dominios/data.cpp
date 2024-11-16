#include "data.hpp"
#include <ctime>
#include <sstream>
#include <iomanip>
//#include <iostream>


bool isLeapYear(int year) {
    // Retorna verdadeiro se o ano for bissexto
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool Data::validar(std::string valor){
    // Cria a data no fomato DD-MM-AA
    std::tm date = {}; // Inicializa a estrutura tm
    std::istringstream iss(valor); // Usando std::istringstream para analisar a string
    iss >> std::get_time(&date, "%d-%m-%y"); // Formato da data
    date.tm_year += 100;
    if (iss.fail())
        return false;
    // Verifica o número de dias em cada mês
    if (date.tm_mon == 1) { // Fevereiro
        if (date.tm_mday > (isLeapYear(date.tm_year) ? 29 : 28)) {
            return false;
        }
    } else if (date.tm_mon == 3 || date.tm_mon == 5 || date.tm_mon == 8 || date.tm_mon == 10) { // Meses com 30 dias
        if (date.tm_mday > 30) {
            return false;
        }
    }
    // Exibindo a data
    //std::cout << "Data convertida: " << std::put_time(&date, "%d-%m-%Y") << std::endl; // Formato DD-MM-YYYY
    return true;
}

bool Data::setValor(std::string valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
