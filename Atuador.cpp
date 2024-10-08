#ifndef ATUADOR_CPP
#define ATUADOR_CPP

#include <iostream>
#include "Componente.cpp"

class Atuador : public Componente {
public:
    Atuador(string nome) : Componente(nome) {}
    virtual bool setValor(int valor) = 0;
};

class Ventilador : public Atuador {
public:
    Ventilador() : Atuador("Ventilador") {}
    bool setValor(int velocidade) override {
        valor = velocidade; 
        return true;
    }
};

class Umidificador : public Atuador {
public:
    Umidificador() : Atuador("Umidificador") {}
    bool setValor(int configuracao) override {
        valor = configuracao; 
        return true;
    }
};

class Desumidificador : public Atuador {
public:
    Desumidificador() : Atuador("Desumidificador") {}
    bool setValor(int configuracao) override {
        valor = configuracao; 
        return true;
    }
};

class Lampada : public Atuador {
public:
    Lampada() : Atuador("Lampada") {}
    bool setValor(int brilho) override {
        valor = brilho; 
        return true;
    }
};

#endif
