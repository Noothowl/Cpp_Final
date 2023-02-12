#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <vector>
#include <ctime>
#include <map>
#include "Cotizacion.h"
#include "Prenda.h"

class Vendedor {
private:
    std::string nombre;
    std::string apellido;
    int id;
    std::map<int, Cotizacion> historial;

public:
    Vendedor(std::string nombre, std::string apellido, int id);

    std::string getNombre() const;
    void setNombre(std::string nombre);
    std::string getApellido() const;
    void setApellido(std::string apellido);
    int getId() const;
    void setId(int id);
    std::map<int, Cotizacion> getHistorial() const;

    void realizarCotizacion(int idCotizacion, int idVendedor, Prenda* cotPrenda, int cantPrenda);
    std::map<int, Cotizacion> getHistorial() {
        return historial;
    }
};

#endif
