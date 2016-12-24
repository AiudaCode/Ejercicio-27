#include "Calcular.h"

Calcular::Calcular()
{
    //se definen los valores por defecto en el constructor de la clase:
    distancia = 0;
    tiempo = 0;
}

Calcular::~Calcular()
{
    //dtor
}

//Implementacion del metodo para calcular la velocidad
float Calcular::velocidad()
{
    //la formula es muy sencilla solo se debe dividir la distancia entre el tiempo
    return distancia / tiempo;
}

//Implementacion de los metodos Setters y Getters de los atributos de la clase:
void Calcular::setDistancia(float n)
{
    distancia = n;
}

float Calcular::getDistancia()
{
    return distancia;
}

void Calcular::setTiempo(float n)
{
    tiempo = n;
}

float Calcular::getTiempo()
{
    return tiempo;
}
