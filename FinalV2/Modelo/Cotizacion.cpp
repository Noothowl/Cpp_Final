#include "Cotizacion.h"

Cotizacion::Cotizacion() {}

Cotizacion::Cotizacion(int idCotizacion, std::string fecha, std::string hora, int idVendedor, Prenda* cotPrenda, int cantPrenda, int resultado)
    : idCotizacion(idCotizacion), fecha(fecha), hora(hora), idVendedor(idVendedor), cotPrenda(cotPrenda), cantPrenda(cantPrenda), resultado(resultado) {}

int Cotizacion::getIdCotizacion() {
    return idCotizacion;
}

std::string Cotizacion::getFecha() {
    return fecha;
}

std::string Cotizacion::getHora() {
    return hora;
}

int Cotizacion::getIdVendedor() {
    return idVendedor;
}

Prenda* Cotizacion::getCotPrenda() {
    return cotPrenda;
}

int Cotizacion::getCantPrenda() {
    return cantPrenda;
}

int Cotizacion::getResultado() {
    return resultado;
}

void Cotizacion::setIdCotizacion(int idCotizacion) {
    this->idCotizacion = idCotizacion;
}

void Cotizacion::setFecha(std::string fecha) {
    this->fecha = fecha;
}

void Cotizacion::setHora(std::string hora) {
    this->hora = hora;
}

void Cotizacion::setIdVendedor(int idVendedor) {
    this->idVendedor = idVendedor;
}

void Cotizacion::setCotPrenda(Prenda* cotPrenda) {
    this->cotPrenda = cotPrenda;
}

void Cotizacion::setCantPrenda(int cantPrenda) {
    this->cantPrenda = cantPrenda;
}

void Cotizacion::setResultado(int resultado) {
    this->resultado = resultado;
}
std::string Cotizacion::toString() const {
    std::string str = "Cotizacion #" + std::to_string(idCotizacion) + "\n";
    str += "Fecha: " + fecha + " " + hora + "\n";
    str += "Vendedor: " + std::to_string(idVendedor) + "\n";
    str += "Prenda: " + cotPrenda->getNombre() + "\n";
    str += "Precio unitario: "+ std::to_string(cotPrenda->getPrecioBase()) + "\n";
    str += "Cantidad: " + std::to_string(cantPrenda) + "\n";
    str += "Precio total: $" + std::to_string(resultado) + "\n";
    return str;
}