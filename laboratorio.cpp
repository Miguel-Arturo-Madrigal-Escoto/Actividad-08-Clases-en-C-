#include "laboratorio.h"
#include <fstream>
#include <string>

using namespace std;

Laboratorio::Laboratorio(){ this->cont = 0;}

void Laboratorio::agregarFinal(const Computadora& c){
    if(cont < 5)
        arreglo[cont++] = c;
    else
        cout << "Arreglo lleno";
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

void Laboratorio::respaldar(){
    
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){

        for(size_t i(0); i < cont; ++i){
            Computadora &c = arreglo[i];
            archivo << c.getNombreEquipo() << endl;
            archivo << c.getSistemaOperativo() << endl;
            archivo << c.getProcesador() << endl;
            archivo << c.getRam() << endl;
        }
        
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("computadoras.txt");

    if(archivo.is_open()){
        Computadora c;
        string temp;
        this->cont = 0;

        while(true)
        {
            getline(archivo, temp);

            if(archivo.eof()) { break; }

            c.setNombreEquipo(temp);

            getline(archivo, temp);
            c.setSistemaOperativo(temp);

            getline(archivo, temp);
            c.setProcesador(temp);

            getline(archivo, temp);
            c.setRam(stoi(temp));

            agregarFinal(c);
        }
    }
    archivo.close();
}