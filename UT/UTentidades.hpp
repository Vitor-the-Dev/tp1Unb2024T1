#ifndef UTENTIDADES_HPP_INCLUDED
#define UTENTIDADES_HPP_INCLUDED

#include "UTFramework.hpp"
#include "../entidades/entidades.hpp" 



class UTAtividade : public UnitTest {
    public:
        void run() override {
            Entidades entidades;


            //Datas  validos e invalidos para test

            std::vector<std::string> validDates = {
                "01/01/2000", "29/02/2020", "31/12/2099"
            };

            std::vector<std::string> invalidDates = {
                "32/01/2020", "31/04/2020", "29/02/2019", "DD/MM/YYYY"
            };

            //Horarios validos e invalidos para test

            std::vector<std::string> validTimes = {
                "00:00:00", "12:34:56", "23:59:59"
            };

            std::vector<std::string> invalidTimes = {
                "24:00:00", "12:60:00", "00:00:60", "HH:MM:SS"
            };


            for (int i = 0; i < 100; i++) {
                
                try {
                    entidades.setCodigo(i);
                    assertTrue(entidades.getCodigo() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows(
                [&]() { entidades.setCodigo(-1); },
                "Invalid value -1 did not throw exception"
            );
            assertThrows( //Evaluate if codigo throws an exception with string
                [&]() { atividade.getCodigo("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end codigo test block 

            printResults();



        }


}
#endif // UTAVALIACAO_HPP_INCLUDED

