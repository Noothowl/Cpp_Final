#include "cotizacion.h"

Cotizacion::Cotizacion(int idCotizacion, std::string fecha, std::string hora, int idVendedor,
    std::string prendaCotizada, int cantidadUnidades, float resultadoCotizacion)
    : idCotizacion(idCotizacion), fecha(fecha), hora(hora), idVendedor(idVendedor),
    prendaCotizada(prendaCotizada), cantidadUnidades(cantidadUnidades),
    resultadoCotizacion(resultadoCotizacion) {}

void Cotizacion::mostrarInfo() {
    std::cout << "ID de la cotización: " << idCotizacion << std::endl;
    std::cout << "Fecha: " << fecha << std::endl;
    std::cout << "Hora: " << hora << std::endl;
    std::cout << "ID del vendedor: " << idVendedor << std::endl;
    std::cout << "Prenda cotizada: " << prendaCotizada << std::endl;
    std::cout << "Cantidad de unidades: " << cantidadUnidades << std::endl;
    std::cout << "Resultado de la cotización: " << resultadoCotizacion << std::endl;
}