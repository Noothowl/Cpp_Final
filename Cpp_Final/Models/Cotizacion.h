#pragma once
#ifndef COTIZACION_H
#define COTIZACION_H

#include <iostream>

class Cotizacion {
private:
    int idCotizacion;
    std::string fecha;
    std::string hora;
    int idVendedor;
    std::string prendaCotizada;
    int cantidadUnidades;
    float resultadoCotizacion;

public:
    Cotizacion(int idCotizacion, std::string fecha, std::string hora, int idVendedor,
        std::string prendaCotizada, int cantidadUnidades, float resultadoCotizacion);
    void mostrarInfo();
};

#endif

