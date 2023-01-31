#include "juego.h"
#include "qpainter.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());
}

Juego::~Juego()
{
    delete ui;
}

void Juego::dibujar()
{

    QPen lapiz;
    lapiz.setWidth(5);
    lapiz.setColor(Qt::black);
    lapiz.setJoinStyle(Qt::MiterJoin);

    lapiz.setColor(Qt::black);
    lapiz.setWidth(5);
    pincel->setPen(lapiz);
    pincel->drawEllipse(m_circulo->getLargo(), m_circulo->getLargo(), m_circulo->getTam(), m_circulo->getTam());
    update();
}

void Juego::on_btnArriba_released()
{

}


void Juego::on_btnAbajo_released()
{

}


void Juego::on_btnIzqueirda_released()
{

}


void Juego::on_btnDerecha_released()
{

}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

