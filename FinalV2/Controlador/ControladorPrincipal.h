#ifndef CONTROLADORPRINCIPAL_H
#define CONTROLADORPRINCIPAL_H

#include "../Modelo/Vendedor.h"
#include "../Modelo/Tienda.h"

class ControladorPrincipal {
private:
    Vendedor vendedor;
    Tienda tienda;

public:
    ControladorPrincipal(Vendedor vendedor, Tienda tienda);

    Vendedor& getVendedor();

    Tienda& getTienda();

};

#endif // CONTROLADORPRINCIPAL_H
