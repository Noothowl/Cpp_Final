#include "Controlador.h"

Controlador::Controlador(ControladorPrincipal controladorPrincipal) : controladorPrincipal(controladorPrincipal) {}

void Controlador::realizarCotizacion(int id, int idVendedor, Prenda* cotPrenda, int cantPrenda) {
    controladorPrincipal.getVendedor().realizarCotizacion(id, idVendedor, cotPrenda, cantPrenda);
}

// otros m�todos del controlador
