#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "ControladorPrincipal.h"
#include "ControladorCotizacion.h"

class Controlador {
private:
    ControladorPrincipal controladorPrincipal;

public:
    Controlador(ControladorPrincipal controladorPrincipal);

    void realizarCotizacion(int id, int idVendedor, Prenda* cotPrenda, int cantPrenda);

    // otros métodos del controlador
};

#endif
