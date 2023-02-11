#include "Prenda.h"

Prenda::Prenda(std::string calidad, double precioUnitario, int stock)
    : calidad(calidad), precioUnitario(precioUnitario), stock(stock) {}

void Prenda::mostrarInfo() {
    std::cout << "Calidad: " << calidad << ", Precio unitario: " << precioUnitario
        << ", Stock: " << stock;
}