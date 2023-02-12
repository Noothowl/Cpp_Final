#include "Vendedor.h"

Vendedor::Vendedor(std::string nombre, std::string apellido, int id) : nombre(nombre), apellido(apellido), id(id) {}

std::string Vendedor::getNombre() const {
    return nombre;
}

void Vendedor::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Vendedor::getApellido() const {
    return apellido;
}

void Vendedor::setApellido(std::string apellido) {
    this->apellido = apellido;
}

int Vendedor::getId() const {
    return id;
}

void Vendedor::setId(int id) {
    this->id = id;
}

std::map<int, Cotizacion> Vendedor::getHistorial() const {
    return historial;
}

void Vendedor::realizarCotizacion(int idCotizacion, int idVendedor, Prenda* cotPrenda, int cantPrenda) {
    int resultado = cotPrenda->calcularPrecio() * cantPrenda;
    time_t t = time(0);
    struct tm ahora;
    localtime_s(&ahora, &t);
    std::string fecha = std::to_string(ahora.tm_mday) + "/" + std::to_string(ahora.tm_mon + 1) + "/" + std::to_string(ahora.tm_year + 1900);
    std::string hora = std::to_string(ahora.tm_hour) + ":" + std::to_string(ahora.tm_min) + ":" + std::to_string(ahora.tm_sec);
    Cotizacion cotizacion(idCotizacion, fecha, hora, idVendedor, cotPrenda, cantPrenda, resultado);
    historial[idCotizacion] = cotizacion;
}
