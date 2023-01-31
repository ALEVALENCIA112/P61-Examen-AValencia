#include "circulo.h"
#include <cstdio>
#include<math.h>

Circulo::Circulo()
{
    //Ubicado en el centro de la pantalla
    ejex=200;
    ejey=150;
    tam=120;
}

int Circulo::getEjex() const
{
    return ejex;
}

void Circulo::setEjex(int newEjex)
{
    ejex = newEjex;
}

/*(REVISAR PRIMERO COMENTARIO DE FUNCION MIEMBRO dibujo() sobre el problema)
    El problema se encontraba en que el return estaba en la variable "ejex"
    ¡¡¡¡¡SIEMPRE REVISAR QUE SE ENCUENTRA BIEN UBICADAS Y DECLARADAS LAS VARIABLES!!!!!*/
int Circulo::getEjey() const
{
    return ejey;
}

void Circulo::setEjey(int newEjey)
{
    ejey = newEjey;
}

int Circulo::getTam() const
{
    return tam;
}

void Circulo::setTam(int newTam)
{
    tam = newTam;
}

Circulo::Circulo(int xpos, int ypos, int num)
    :QPoint(xpos, ypos)
{
    this->ejex=xpos;
    this->ejey=ypos;
    this->tam=num;

}
