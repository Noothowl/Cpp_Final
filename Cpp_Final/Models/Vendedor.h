#pragma once
#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <vector>
#include "cotizacion.h"
#include "tienda.h"

class Vendedor {
private:
    std::string nombre;
    std::string apellido;
    int idVendedor;
    std::vector<Cotizacion> historialCotizaciones;
    Tienda tienda;

public:
    Vendedor(std::string nombre, std::string apellido, int idVendedor, Tienda tienda);
    void agregarCotizacion(Cotizacion cotizacion);
    void listarHistorialCotizaciones();
};

#endif