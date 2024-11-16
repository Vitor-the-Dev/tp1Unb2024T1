#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

class Dinheiro {
    private:
            float valor; //Atributo para armazenar valor.
            bool validar(float); //Método para validar valor.
    public:
            bool setValor(float); //Método para atribuir valor.
            float getValor() const; // Método para recuperar valor.
};

inline float Dinheiro::getValor() const { //Implementação de método
    return valor;
}

#endif // DINHEIRO_HPP_INCLUDED
