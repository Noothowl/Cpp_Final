#include "tienda.h"

Tienda::Tienda(std::string nombre, std::string direccion)
    : nombre(nombre), direccion(direccion) {}

void Tienda::agregarPrenda(Prenda prenda) {
    prendas.push_back(prenda);
}

void Tienda::listarPrendas() {
    std::cout << "Listado de prendas en la tienda " << nombre << ":" << std::endl;
    for (int i = 0; i < prendas.size(); i++) {
        std::cout << "Prenda " << i + 1 << ": ";
        prendas[i].mostrarInfo();
        std::cout << std::endl;
    }
}