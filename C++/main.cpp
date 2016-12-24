#include <iostream>
#include "Calcular.h"

using namespace std;

int main()
{
    //Se crea un objeto de la clase Calcular (Instanciaciación)
    Calcular* obj = new Calcular();
    //se definen dos variable de tipo float llamada "d" y "t"
    float d, t;
    //se pide la distancia y se guarda en la variable "d"
    cout << "Digite distancia: (km)" << endl;
    cin >> d;
    obj->setDistancia(d);//se llama al metodo modificador de la distancia y se le asigna como parametro la variable "d"
    //se pide el tiempo y se guarda en la variable "t"
    cout << "Digite tiempo: (h)" << endl;
    cin >> t;
    obj->setTiempo(t);//se llama al metodo modificador del tiempo y se le asigna como parametro la variable "t"
    //se muestra la distancia en km
    cout << "Distacia: " << obj->getDistancia() << "km" << endl;
    //se muestra el tiempo en horas
    cout << "Tiempo: " << obj->getTiempo() << "h" << endl;
    //se muestra la velocidad en km/h
    cout << "Velocidad: " << obj->velocidad() << "km/h" << endl;
    return 0;
}
