#ifndef IAVIAGEM_HPP_INCLUDED
#define IAVIAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../interfaces/isviagem.hpp"

using namespace std;

class IAViagem {
public:
    virtual bool registrarViagem(Codigo*) = 0; // Method for registering a trip.
    virtual void setCntrISViagem(ISViagem*) = 0; // Link to the service layer controller.
    virtual ~IAViagem(){} // Virtual destructor.
};

#endif // IAVIAGEM_HPP_INCLUDED