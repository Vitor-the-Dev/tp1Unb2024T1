#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

class Avaliacao {
    private:
            int valor; //Atributo para armazenar valor.
            bool validar(int); //M�todo para validar valor.
    public:
            bool setValor(int); //M�todo para atribuir valor.
            int getValor() const; // M�todo para recuperar valor.
};

inline int Avaliacao::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // AVALIACAO_HPP_INCLUDED
