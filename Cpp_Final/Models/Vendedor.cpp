#include "vendedor.h"

Vendedor::Vendedor(std::string nombre, std::string apellido, int idVendedor, Tienda tienda)
    : nombre(nombre), apellido(apellido), idVendedor(idVendedor), tienda(tienda) {}

void Vendedor::agregarCotizacion(Cotizacion cotizacion) {
    historialCotizaciones.push_back(cotizacion);
}

void Vendedor::listarHistorialCotizaciones() {
    std::cout << "Historial de cotizaciones del vendedor " << nombre << " " << apellido << ":" << std::endl;
    for (int i = 0; i < historialCotizaciones.size(); i++) {
        std::cout << "Cotización " << i + 1 << ": ";
        historialCotizaciones[i].mostrarInfo();
        std::cout << std::endl;
    }
}
