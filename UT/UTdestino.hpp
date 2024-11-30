#ifndef UTDESTINO_HPP_INCLUDED
#define UTDESTINO_HPP_INCLUDED

#include "UTFramework.hpp"
#include "../entidades/destino.hpp" 



class UTDestino : public UnitTest {
    public:
        void run() override {
            Destino destino;

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



            // star codigo test block
            for (int i = 0; i < 100; i++) { //Evaluate codigo as int from 0 to 100
                
                try {
                    destino.setCodigo(i);
                    assertTrue(destino.getCodigo() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if codigo throws an exception with negative int
                [&]() { destino.getCodigo(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if codigo throws an exception with string
                [&]() { destino.getCodigo("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end codigo test block 


            // start nome test block
            for (int i = 0; i < 100; i++) { //Evaluate Nome as int from 0 to 100
                std::string name = std::to_string(i); // Convert int to string
                try {

                    destino.setNome(name);
                    assertTrue(destino.getNome() == name, "Valid value test failed for value " + name);
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + name);
                }
            }

            assertThrows( //Evaluate if Nome throws an exception with negative int
                [&]() { destino.getNome(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Nome throws an exception with string
                [&]() { destino.getNome("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end nome test block 

            // start dataini test block
            for (const auto& date : validDates) { //Evaluate DataIni as int from 0 to 100
                
                try {
                    destino.setDataIni(data);
                    assertTrue(destino.getDataIni() == data, "Valid value test failed for value " + std::to_string(data));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(data));
                }
            }

            for (const auto& date : invalidDates) { //Evaluate DataIni as int from 0 to 100
                
                try {
                    destino.setDataIni(data);
                    assertTrue(destino.getDataIni() == data, "Valid value test failed for value " + std::to_string(data));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(data));
                }
            }

            assertThrows( //Evaluate if Nome throws an exception with negative int
                [&]() { destino.getDataIni(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Nome throws an exception with string
                [&]() { destino.getDataIni("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end DataIniini test block 

            // start DataInifim test block
            for for (const auto& date : validDates) { //Evaluate DataFim as int from 0 to 100
                
                try {
                    destino.setDataFim(data);
                    assertTrue(destino.getDataFim() == data, "Valid value test failed for value " + std::to_string(data));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(data));
                }
            }

            for for (const auto& date : invalidDates) { //Evaluate DataFim as int from 0 to 100
                
                try {
                    destino.setDataFim(data);
                    assertTrue(destino.getDataFim() == data, "Valid value test failed for value " + std::to_string(data));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(data));
                }
            }


            assertThrows( //Evaluate if Nome throws an exception with negative int
                [&]() { destino.getDataFim(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Nome throws an exception with string
                [&]() { destino.getDataFim("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end datafim test block 

             

            // star Avaliacao test block
            for (int i = 0; i < 100; i++) { //Evaluate Avaliacao as int from 0 to 100
                
                try {
                    destino.setAvaliacao(i);
                    assertTrue(destino.getAvaliacao() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if Avaliacao throws an exception with negative int
                [&]() { destino.getAvaliacao(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Avaliacao throws an exception with string
                [&]() { destino.getAvaliacao("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end Avaliacao test block 

            printResults();



        }


}
#endif // UTAVALIACAO_HPP_INCLUDED



