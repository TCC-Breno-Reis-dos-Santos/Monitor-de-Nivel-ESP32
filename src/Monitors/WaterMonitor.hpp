#ifndef WATERMONITOR_H
#define WATERMONITOR_H

#include "EstadoDoNivelDeAgua.hpp"

class WaterMonitor
{
protected:
    float alturaDoSensor;
    float alturaQuandoCheio;
    float alturaQuandoVazio;

    int porcentagemQuandoVazio;
    int porcentagemQuandoCheio;

    bool trava;

    int porcentagemDoNivelDeAgua;

    EstadoDoNivelDeAgua estado;

    void atualizaEstado();

public:
    void atualizaNivel(float distanciaEmCm);
    int getNivel();
    bool getTrava();
    EstadoDoNivelDeAgua getEstado();
    void controlaTrava(bool travar);
    virtual void gerenciaReservatorio();
};

#endif
