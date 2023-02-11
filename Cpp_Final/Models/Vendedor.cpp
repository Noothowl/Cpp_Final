#include "vendedor.h"

Vendedor::Vendedor(std::string nombre, std::string apellido, int id_vendedor)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->id_vendedor = id_vendedor;
}

void Vendedor::cotizar(Cotizacion cotizacion)
{
    historial.push_back(cotizacion);
}

std::string Vendedor::getNombre()
{
    return nombre;
}

std::string Vendedor::getApellido()
{
    return apellido;
}

int Vendedor::getIdVendedor()
{
    return id_vendedor;
}

std::vector<Cotizacion> Vendedor::getHistorial()
{
    return historial;
}
