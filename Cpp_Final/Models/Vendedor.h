#pragma once
#include <vector>
#include <string>
#include "cotizacion.h"

class Vendedor
{
public:
    Vendedor(std::string nombre, std::string apellido, int id_vendedor);
    void cotizar(Cotizacion cotizacion);
    std::string getNombre();
    std::string getApellido();
    int getIdVendedor();
    std::vector<Cotizacion> getHistorial();

private:
    std::string nombre;
    std::string apellido;
    int id_vendedor;
    std::vector<Cotizacion> historial;
};
