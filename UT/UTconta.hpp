#ifndef UTCONTA_HPP_INCLUDED
#define UTCONTA_HPP_INCLUDED

#include "UTFramework.hpp"
#include "../entidades/conta.hpp" 



class UTConta : public UnitTest {
    public:
        void run() override {
            Conta conta;

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


            for (int i = 0; i < 100; i++) { //Evaluate codigo as int from 0 to 100
                conta.setCodigo(i);
                try {
                    conta.getCodigo(i);
                    assertTrue(conta.getCodigo() == i, "Valid value test failed for codigo " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid codigo " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if codigo throws an exception with negative int
                [&]() { conta.getCodigo(-1); },
                "Invalid codigo -1 did not throw exception"
            );

            assertThrows( //Evaluate if codigo throws an exception with string
                [&]() { conta.getCodigo("a"); },
                "Invalid value a did not throw exception"
            );
            // end codigo test block 
            // begin senha test block
            for (int i = 0; i < 100; i++) { //Evaluate codigo as int from 0 to 100
                conta.setSenha(i);
                try {
                    conta.getSenha(i);
                    assertTrue(conta.getSenha() == i, "Valid value test failed for codigo " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid codigo " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if codigo throws an exception with negative int
                [&]() { conta.getSenha(-1); },
                "Invalid codigo -1 did not throw exception"
            );

            







            printResults();



        }


}
#endif // UTAVALIACAO_HPP_INCLUDED
