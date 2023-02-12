#include "ControladorCotizacion.h"
#include <chrono>
#include <ctime>
using namespace std;

ControladorCotizacion::ControladorCotizacion(Tienda* tienda, Vendedor* vendedor)
    : tienda(tienda), vendedor(vendedor) {}
Cotizacion ControladorCotizacion::realizarCotizacion(int idCotizacion, Prenda* prenda, int cantidad) {
    // Verificar si hay suficiente stock
    if (cantidad > prenda->getStock()) {
        throw "No hay suficiente stock para realizar la cotizacion";
    }

    // Actualizar el stock de la prenda
    prenda->setStock(prenda->getStock() - cantidad);

    // Calcular el precio de la cotizacion
    double precioPrenda = prenda->calcularPrecio();
    double precioCotizacion = precioPrenda * cantidad;

    // Registrar la cotizacion en el historial del vendedor
    auto now = chrono::system_clock::now();
    time_t time = chrono::system_clock::to_time_t(now);
    tm timeInfo;
    localtime_s(&timeInfo, &time);
    string fecha = to_string(timeInfo.tm_mday) + "/" + to_string(timeInfo.tm_mon + 1) + "/" + to_string(timeInfo.tm_year + 1900);
    string hora = to_string(timeInfo.tm_hour) + ":" + to_string(timeInfo.tm_min) + ":" + to_string(timeInfo.tm_sec);
    Cotizacion cotizacion(idCotizacion, fecha, hora, vendedor->getId(), prenda, cantidad, precioCotizacion);
    vendedor->realizarCotizacion(cotizacion.getIdCotizacion(), cotizacion.getIdVendedor(), cotizacion.getCotPrenda(), cotizacion.getCantPrenda());

    return cotizacion;
}
