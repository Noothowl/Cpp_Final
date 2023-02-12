#include "ControladorPrincipal.h"

ControladorPrincipal::ControladorPrincipal(Vendedor vendedor, Tienda tienda)
    : vendedor(vendedor), tienda(tienda) {}

Vendedor& ControladorPrincipal::getVendedor() {
    return vendedor;
}

Tienda& ControladorPrincipal::getTienda() {
    return tienda;
}
