#include "circulo.h"
#include <cstdio>
#include<math.h>

Circulo::Circulo()
    :QPoint(0,0)
{

}

Circulo::Circulo(int xpos, int ypos, int num)
    :QPoint(xpos, ypos)
{


}

int Circulo::getLargo() const
{
    return largo;
}

void Circulo::setLargo(int newLargo)
{
    largo = newLargo;
}

int Circulo::getAlto() const
{
    return alto;
}

void Circulo::setAlto(int newAlto)
{
    alto = newAlto;
}

int Circulo::getTam() const
{
    return tam;
}

void Circulo::setTam(int newTam)
{
    tam = newTam;
}
