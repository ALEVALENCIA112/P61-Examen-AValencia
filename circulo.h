#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include "configuracion.h"

#include<iostream>

using namespace std;

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos, int num);


    int getLargo() const;
    void setLargo(int newLargo);

    int getAlto() const;
    void setAlto(int newAlto);

    int getTam() const;
    void setTam(int newTam);

private:
    int largo;
    int alto;
    int tam;
};

#endif // CIRCULO_H
