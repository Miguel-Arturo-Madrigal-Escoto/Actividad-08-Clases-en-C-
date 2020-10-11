#include <iostream>
#include "laboratorio.h"
int main(){

    Computadora com1 = Computadora("Desktop-Madrigal", "Windows 10 pro - 64 bits", "Ryzen 5 3600", 16);
    Computadora com2 = Computadora("Desktop-Miguel", "Windows 10 home - 64 bits", "Ryzen 5 3400G", 8);
    Computadora com3 = Computadora("Desktop-Escoto", "Windows 10 pro - 64 bits", "Ryzen 3 3300x", 32);

    Computadora com4;
    com4.setNombreEquipo("PC-Alienware");
    com4.setSistemaOperativo("Windows 7 Ultimate - 64 bits");
    com4.setProcesador("Intel Core i9 9900k");
    com4.setRam(32);

    Computadora com5;
    com5.setNombreEquipo("Desktop_Cucei-01");
    com5.setSistemaOperativo("Windows 10 Pro - 64 bits");
    com5.setProcesador("Ryzen 7 3700x");
    com5.setRam(16);

    Laboratorio lab;
    lab.agregarFinal(com1);
    lab.agregarFinal(com2);
    lab.agregarFinal(com3);
    lab.agregarFinal(com4);
    lab.agregarFinal(com5);

    lab.mostrar();

    return 0;
}