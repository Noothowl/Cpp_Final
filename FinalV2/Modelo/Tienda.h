
#ifndef TIENDA_H
#define TIENDA_H

#include <string>
#include <vector>
#include "Prenda.h"

class Tienda {
private:
    std::string nombre;
    std::string direccion;
    std::vector<Prenda*> prendas;

public:
    Tienda(std::string nombre, std::string direccion);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getDireccion();
    void setDireccion(std::string direccion);
    std::vector<Prenda*> getPrendas();
    void agregarPrenda(Prenda* prenda);
};

#endif // TIENDA_H
