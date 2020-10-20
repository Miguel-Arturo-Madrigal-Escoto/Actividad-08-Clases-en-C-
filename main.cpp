#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Computadora com1 = Computadora("Desktop-Madrigal", "Windows 10 pro - 64 bits", "Ryzen 5 3600", 16);

    Laboratorio lab;
    Computadora com2, com3, com4, com5;
    com2.setNombreEquipo("Desktop-Cucei-05");
    com2.setSistemaOperativo("Windows 10 home - 64 bits");
    com2.setProcesador("Ryzen 3 3100");
    com2.setRam(32);

    cin >> com3 >> com4 >> com5;
    lab << com1 << com2 << com3 << com4 << com5;
    lab.respaldar();
    lab.recuperar();
    lab.mostrar();

    return 0;
}