#ifndef UTFRAMEWORK_HPP_INCLUDED
#define UTFRAMEWORK_HPP_INCLUDED

#include <iostream>
#include <string>
#include <functional>

// Basic framework for Unit testing
class UnitTest {
    protected: // Sets up total tests to be run, if total tests = passedtests then everything's alright
        int totalTests = 0; 
        int passedTests = 0;


        void assetTrue(bool condition, const std::string& message) { //We'll test if a condition is met here
            ++totalTests; //Adds total tests done
            if (condition) {
                ++passedTests; // if the condition is met, then we passed the test!
            } else { // if the condition is false, we raise a message informing the failure
                std::cerr << "Test failed: " << message << std::endl;
            }

        }

        void assertThrow(std::function<void()> func, const std::string& message) {
            ++totalTests;
            try {
                func();
                std::cerr << "Test failed: " << message << " (No exception thrown)" << std::endl;
            } catch (...) {
                ++passedTests;
            }
        }




        void printResults() const {
            std::cout << "Passed " << passedTests << " out of " << totalTests << " tests." << std::endl;
        }



    public:
        virtual ~UnitTest() = default;
        virtual void run() = 0; // To be implemented by specific tests
};

#endif 