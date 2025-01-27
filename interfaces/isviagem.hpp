#ifndef ISVIAGEM_HPP_INCLUDED
#define ISVIAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"

using namespace std;

class ISViagem {
public:
    virtual bool novaViagem(const Codigo&, const Nome&, const Avaliacao&) = 0; // Method to register a trip.
    virtual ~ISViagem(){} // Virtual destructor.
};

#endif // ISVIAGEM_HPP_INCLUDED
