#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

class Computadora{
private:
    std::string nombreEquipo;
    std::string sistemaOperativo;
    std::string procesador;
    unsigned int ram;
public:
    Computadora();
    Computadora(const std::string& nombreEquipo, const std::string& sistemaOperativo, const std::string& procesador, unsigned int ram);

    void setSistemaOperativo(const std::string& v);
    void setNombreEquipo(const std::string& v);
    void setProcesador(const std::string& v);
    void setRam(unsigned int v);

    std::string getSistemaOperativo();
    std::string getNombreEquipo();
    std::string getProcesador();
    unsigned int getRam();

    ~Computadora();
    
};
    
#endif