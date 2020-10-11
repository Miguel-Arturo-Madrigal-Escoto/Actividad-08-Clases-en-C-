#include "laboratorio.h"

using namespace std;

Laboratorio::Laboratorio(){ this->cont = 0;}

void Laboratorio::agregarFinal(const Computadora& c){
    if(cont < 5)
        arreglo[cont++] = c;
    else
        cout << "Arreglo lleno" << endl;
}

void Laboratorio::mostrar(){
    cout << "- - Computadoras - -" << endl << endl;

    for(size_t i(0); i < cont; ++i){
        Computadora &c = arreglo[i];
        cout << "Nombre del equipo: " << c.getNombreEquipo() << endl;
        cout << "Sistema operativo: " << c.getSistemaOperativo() << endl;
        cout << "Procesador: " << c.getProcesador() << endl;
        cout << "Memoria RAM: " << c.getRam() << endl << endl;
    }
}