#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

class Duracao {
    private:
            int valor; //Atributo para armazenar valor.
            bool validar(int); //M�todo para validar valor.
    public:
            bool setValor(int); //M�todo para atribuir valor.
            int getValor() const; // M�todo para recuperar valor.
};

inline int Duracao::getValor() const { //Implementa��o de m�todo
    return valor;
}

#endif // DURACAO_HPP_INCLUDED
