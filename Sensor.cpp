#ifndef SENSOR_CPP
#define SENSOR_CPP

#include <iostream>
#include <cstdlib>
#include "Componente.cpp"

class Sensor : public Componente {
public:
    Sensor(string nome) : Componente(nome) {}
    virtual void atualizar() = 0;
};

class Temperatura : public Sensor {
public:
    Temperatura() : Sensor("Temperatura") {}
    void atualizar() {
        valor = 15 + rand() % 16; 
    }
};

class Luminosidade : public Sensor {
    int limiarClaridade;

public:
    Luminosidade(int limiar) : Sensor("Luminosidade"), limiarClaridade(limiar) {}
    void atualizar() {
        valor = rand() % 100; 
    }
    bool estaClaro() const {
        return valor >= limiarClaridade;
    }
};

class Umidade : public Sensor {
public:
    Umidade() : Sensor("Umidade") {}
    void atualizar() {
        valor = rand() % 101; 
    }
};

#endif 
