#include "data.hpp"
#include <ctime>
#include <sstream>
#include <iomanip>

/// Verifica se o ano e ano bissexto
/// @param year ano em inteiro para ser avaliado
/// @return ano se ano % 4 e 0 e ano % 100 e diferente de zero, ou ano % 400 e igual a zero
bool isLeapYear(int year) {
    // Retorna verdadeiro se o ano for bissexto
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/// Método para validar uma string como uma data no formato DD-MM-AAAA.
/// @param valor String representando a data a ser validada.
/// @throws std::invalid_argument Se a string fornecida não estiver no formato esperado 
///         ou representar uma data inválida (e.g., dia fora do intervalo permitido 
///         para o mês, ano inválido, etc.).
void Data::validar(string valor){
    // Cria a data no fomato DD-MM-AA
    tm date = {}; // Inicializa a estrutura tm
    istringstream iss(valor); // Usando istringstream para analisar a string
    iss >> get_time(&date, "%d-%m-%y"); // Formato da data
    date.tm_year += 100;
    if (iss.fail())
        throw invalid_argument("Argumento invalido.");
    // Verifica o n�mero de dias em cada m�s
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

/// Valida input valor, e passa o input para o objeto
/// @param valor valor para ser validado e passado para o objeto

void Data::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
