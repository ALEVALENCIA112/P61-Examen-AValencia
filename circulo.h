#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>

#include<iostream>

using namespace std;

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos, int num);

    //Los respectivos get y set nos dejarán ubicar el circulo
    //Ubicacion en el eje X
    int getEjex() const;
    void setEjex(int newEjex);
    //ubicacion en el eje Y
    int getEjey() const;
    void setEjey(int newEjey);
    //Tamaño del circulo
    int getTam() const;
    void setTam(int newTam);

private:
    //Las variables se crean para poder crear el margen del circulo
    int ejex;
    int ejey;
    int tam;
};

#endif // CIRCULO_H
