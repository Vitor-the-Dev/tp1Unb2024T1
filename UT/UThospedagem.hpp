#ifndef UTHOSPEDAGEM_HPP_INCLUDED
#define UTHOSPEDAGEM_HPP_INCLUDED

#include "UTFramework.hpp"
#include "../entidades/hospedagem.hpp" 



class UTHospedagem : public UnitTest {
    public:
        void run() override {
            Hospedagem hospedagem;



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
                    hospedagem.setCodigo(i);
                    assertTrue(hospedagem.getCodigo() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if codigo throws an exception with negative int
                [&]() { hospedagem.getCodigo(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if codigo throws an exception with string
                [&]() { hospedagem.getCodigo("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end codigo test block 


            // start nome test block
            for (int i = 0; i < 100; i++) { //Evaluate Nome as int from 0 to 100
                std::string name = std::to_string(i)
                try {
                    hospedagem.setNome(name);
                    assertTrue(hospedagem.getNome() == name, "Valid value test failed for value " + name);
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + name);
                }
            }

            assertThrows( //Evaluate if Nome throws an exception with negative int
                [&]() { hospedagem.getNome(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Nome throws an exception with string
                [&]() { hospedagem.getNome("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end nome test block 

            // start Diaria test block
            for (int i = 0; i < 100; i++) { //Evaluate Diaria as int from 0 to 100
                
                try {
                    hospedagem.setDiaria(i);
                    assertTrue(hospedagem.getDiaria() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if Nome throws an exception with negative int
                [&]() { hospedagem.getDiaria(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Nome throws an exception with string
                [&]() { hospedagem.getDiaria("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end Diaria test block 

            

             

            // star Avaliacao test block
            for (int i = 0; i < 100; i++) { //Evaluate Avaliacao as int from 0 to 100
                
                try {
                    hospedagem.setAvaliacao(i);
                    assertTrue(hospedagem.getAvaliacao() == i, "Valid value test failed for value " + std::to_string(i));
                } catch (...) {
                    assertTrue(false, "Exception thrown for valid value " + std::to_string(i));
                }
            }

            assertThrows( //Evaluate if Avaliacao throws an exception with negative int
                [&]() { hospedagem.getAvaliacao(-1); },
                "Invalid value -1 did not throw exception"
            );

            assertThrows( //Evaluate if Avaliacao throws an exception with string
                [&]() { hospedagem.getAvaliacao("a"); },
                "Invalid value -1 did not throw exception"
            );
            // end Avaliacao test block 
             

            printResults();



        }


}
#endif // UTAVALIACAO_HPP_INCLUDED

