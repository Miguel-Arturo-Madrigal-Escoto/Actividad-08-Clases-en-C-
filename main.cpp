#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){

    Computadora com1 = Computadora("Desktop-Madrigal", "Windows 10 pro - 64 bits", "Ryzen 5 3600", 16);
    Computadora com2 = Computadora("Desktop-Miguel", "Windows 10 home - 64 bits", "Ryzen 5 3400G", 8);

    Computadora com3;
    com3.setNombreEquipo("Desktop-Cucei-05");
    com3.setSistemaOperativo("Windows 10 home - 64 bits");
    com3.setProcesador("Ryzen 3 3100");
    com3.setRam(32);

    Laboratorio lab;
    Computadora com4, com5;

    cin >> com4 >> com5;
    lab << com1 << com2 << com3 << com4 << com5;
    lab.mostrar();

    return 0;
}