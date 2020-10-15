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

    cout << left;
    cout << setw(20) << "Nombre equipo";
    cout << setw(30) << "Sistema operativo";
    cout << setw(20) << "Procesador";
    cout << setw(10) << "Ram";
    cout << endl;
    
    for(size_t i(0); i < cont; ++i){
        Computadora &c = arreglo[i];
        cout << c;
    }
}