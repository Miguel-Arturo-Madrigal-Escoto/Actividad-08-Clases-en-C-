#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio{
private:
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();

    void agregarFinal(const Computadora& c);
    void mostrar();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio& lab, const Computadora& com){
        lab.agregarFinal(com);
        
        return lab;
    }
};

#endif