#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

class Dinheiro {
    private:
            float valor; //Atributo para armazenar valor.
            bool validar(float); //M�todo para validar valor.
    public:
            bool setValor(float); //M�todo para atribuir valor.
            float getValor() const; // M�todo para recuperar valor.
};

inline float Dinheiro::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DINHEIRO_HPP_INCLUDED
