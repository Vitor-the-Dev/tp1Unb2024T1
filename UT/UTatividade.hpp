#ifndef UTATIVIDADE_HPP_INCLUDED
#define UTATIVIDADE_HPP_INCLUDED

#include "UTFramework.hpp"
#include "../entidades/atividade.hpp" 

//Uses UTFraework for unit testing

class UTAtividade : public UnitTest {
    public:
        void run() override {
            Atividade atividade;


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
                    atividade.setCodigo(i);
                    assertTrue(atividade.getCodigo() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if codigo throws an exception with negative int
                [&]() { atividade.getCodigo(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if codigo throws an exception with string
                [&]() { atividade.getCodigo("a"); },
                "Invalid value a did not throw exception"
            );
            // end codigo test block 


            // start nome test block
            for (int i = 0; i < 100; i++) { //Evaluate Nome as int from 0 to 100
                std::string name = std::to_string(i); // Convert int to string
                try {
                    atividade.setNome(i);
                    assertTrue(atividade.getNome() == name, "Valid value test failed for value " + name);
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + name);
                }
            }

            assertThrows( //Evaluate if Nome throws an exception with negative int
                [&]() { atividade.getNome(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Nome throws an exception with string
                [&]() { atividade.getNome("25"); },
                "Invalid value 25 did not throw exception"
            );
            // end nome test block 

            // start data test block
            for (const auto& date : validDates) { //Evaluate Data as int from 0 to 100
                
                try {
                    atividade.setData(date);
                    assertTrue(atividade.getData() == date, "Valid value test failed for value " + std::to_string(date));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(date));
                }
            }

            for (const auto& date : invalidDates) { //Evaluate Data as int from 0 to 100
                
                try {
                    atividade.setData(date);
                    assertTrue(atividade.getData() == date, "Valid value test failed for value " + std::to_string(date));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(date));
                }
            }

            assertThrows( //Evaluate if Nome throws an exception with negative int
                [&]() { atividade.getData(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Nome throws an exception with string
                [&]() { atividade.getData("a"); },
                "Invalid value a did not throw exception"
            );
            // end data test block 

            // start horario test block 
            for for (const auto& time : validTimes) { //Evaluate horario as int from 0 to 100
                
                try {
                    atividade.setHorario(time);
                    assertTrue(atividade.getHorario() == time, "Valid value test failed for value " + std::to_string(time));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(time));
                }
            }

            for for (const auto& time : invalidTimes) { //Evaluate horario as int from 0 to 100
                
                try {
                    atividade.setHorario(time);
                    assertTrue(atividade.getHorario() == time, "Valid value test failed for value " + std::to_string(time));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(time));
                }
            }

            assertThrows( //Evaluate if Horario throws an exception with negative int
                [&]() { atividade.getHorario(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Horario throws an exception with string
                [&]() { atividade.getHorario("a"); },
                "Invalid value a did not throw exception"
            );
            // end horario test block 

            // star Duracao test block
            for (const auto& date : validDates) { //Evaluate Duracao as int from 0 to 100
                
                try {
                    atividade.setDuracao(date);
                    assertTrue(atividade.getDuracao() == date, "Valid value test failed for value " + std::to_string(date));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(date));
                }
            }

            for (const auto& date : invalidDates) { //Evaluate Duracao as int from 0 to 100
                
                try {
                    atividade.setDuracao(date);
                    assertTrue(atividade.getDuracao() == date, "Valid value test failed for value " + std::to_string(date));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(date));
                }
            }

            assertThrows( //Evaluate if Duracao throws an exception with negative int
                [&]() { atividade.getDuracao(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Duracao throws an exception with string
                [&]() { atividade.getDuracao("a"); },
                "Invalid value a did not throw exception"
            );
            // end Duracao test block 


            // star Preco test block
            for (int i = 0; i < 100; i++) { //Evaluate Preco as int from 0 to 100
                
                try {
                    atividade.setPreco(i);
                    assertTrue(atividade.getPreco() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if Preco throws an exception with negative int
                [&]() { atividade.getPreco(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Preco throws an exception with string
                [&]() { atividade.getPreco("a"); },
                "Invalid value a did not throw exception"
            );
            // end Preco test block 

            // star Avaliacao test block
            for (int i = 0; i < 100; i++) { //Evaluate Avaliacao as int from 0 to 100
                
                try {
                    atividade.setAvaliacao(i);
                    assertTrue(atividade.getAvaliacao() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if Avaliacao throws an exception with negative int
                [&]() { atividade.getAvaliacao(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Avaliacao throws an exception with string
                [&]() { atividade.getAvaliacao("a"); },
                "Invalid value a did not throw exception"
            );
            // end Avaliacao test block 




            printResults();



        }


}
#endif // UTAVALIACAO_HPP_INCLUDED



