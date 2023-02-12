#include <iostream>
#include <ctime>
using namespace std;

#include "ControladorPrincipal.h"
#include "ControladorCotizacion.h"

class Controlador {
private:
    ControladorPrincipal controladorPrincipal;

public:
    Controlador(ControladorPrincipal controladorPrincipal) : controladorPrincipal(controladorPrincipal) {}

    void realizarCotizacion(int id, int idVendedor, Prenda* cotPrenda, int cantPrenda) {
        controladorPrincipal.getVendedor().realizarCotizacion(id, idVendedor, cotPrenda, cantPrenda);
    }

    // otros métodos del controlador
};
