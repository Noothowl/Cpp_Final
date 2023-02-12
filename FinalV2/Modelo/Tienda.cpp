#include "Tienda.h"

Tienda::Tienda(std::string nombre, std::string direccion) : nombre(nombre), direccion(direccion) {}

std::string Tienda::getNombre() {
    return nombre;
}

void Tienda::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Tienda::getDireccion() {
    return direccion;
}

void Tienda::setDireccion(std::string direccion) {
    this->direccion = direccion;
}

std::vector<Prenda*> Tienda::getPrendas() {
    return prendas;
}

void Tienda::agregarPrenda(Prenda* prenda) {
    prendas.push_back(prenda);
}
