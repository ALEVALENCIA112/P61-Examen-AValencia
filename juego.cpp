#include "juego.h"
#include "qpainter.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    //Se debe enviar a crear un nuevo objeto ya que esto hará que el circulo se grafique
    m_circulo = new Circulo;

    //Sacado de codigo MiPaint (Checar repositorio)
    ui->setupUi(this);
    imagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
    imagen->fill(Qt::white);
    pincel = new QPainter(imagen);
    pincel->setRenderHint(QPainter::Antialiasing);

    dibujar();
}

Juego::~Juego()
{
    //Sacado de codigo MiPaint (Checar repositorio)
    delete ui;
    delete pincel;
    delete imagen;
}

void Juego::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(0, 0, *imagen);
}

void Juego::on_btnArriba_released()
{
    imagen->fill(Qt::white);
    m_circulo->setEjey(m_circulo->getEjey()-10);
    dibujar();
}


void Juego::on_btnAbajo_released()
{
    imagen->fill(Qt::white);
    m_circulo->setEjey(m_circulo->getEjey()+10);
    dibujar();
}


void Juego::on_btnIzqueirda_released()
{
    imagen->fill(Qt::white);
    m_circulo->setEjex(m_circulo->getEjex()-10);
    dibujar();
}


void Juego::on_btnDerecha_released()
{
    imagen->fill(Qt::white);
    m_circulo->setEjex(m_circulo->getEjex()+10);
    dibujar();
}

//antes de terminar tenía un problema en circulo.cpp donde el circulo subi y bajaba mientras se accionaban los botenes izquierda y derecha
void Juego::dibujar()
{
    //Sacado de codigo MiPaint (Checar repositorio)
    QPen lapiz;
    lapiz.setWidth(5);
    lapiz.setColor(Qt::black);
    lapiz.setJoinStyle(Qt::MiterJoin);
    lapiz.setColor(Qt::black);
    lapiz.setWidth(5);
    pincel->setPen(lapiz);
    pincel->drawEllipse(m_circulo->getEjex(), m_circulo->getEjey(), m_circulo->getTam(), m_circulo->getTam());
    update();
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

