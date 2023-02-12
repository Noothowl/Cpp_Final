
#ifndef CONTROLADORCOTIZACION_H
#define CONTROLADORCOTIZACION_H
#include <chrono>
#include <ctime>

#include "../Modelo/Cotizacion.h"
#include "../Modelo/Prenda.h"
#include "../Modelo/Tienda.h"
#include "../Modelo/Vendedor.h"



class ControladorCotizacion {
private:
    Tienda* tienda;
    Vendedor* vendedor;

public:
    ControladorCotizacion(Tienda* tienda, Vendedor* vendedor);

    Cotizacion realizarCotizacion(int idCotizacion, Prenda* prenda, int cantidad);

    Tienda* getTienda() const;

    Vendedor* getVendedor() const;
};

#endif // CONTROLADORCOTIZACION_H
