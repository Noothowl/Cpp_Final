#include "cotizacion.h"
#include <sstream>
#include <iomanip>

Cotizacion::Cotizacion(int id_cotizacion, std::string prenda_cotizada, int cantidad, float resultado)
{
    this->id_cotizacion = id_cotizacion;
    this->prenda_cotizada = prenda_cotizada;
    this->cantidad = cantidad;
    this->resultado = resultado;

    // Obtener fecha y hora actual
    time_t t = time(0);
    struct tm* now = localtime(&t);
    std::ostringstream fecha_hora_stream;
    fecha_hora_stream << (now->tm_year + 1900) << '-'
        << std::setfill('0') << std::setw(2) << (now->tm_mon + 1) << '-'
        << std::setfill('0') << std::setw(2) << now->tm_mday << " "
        << std::setfill('0') << std::setw(2) << now->tm_hour << ":"
        << std::setfill('0') << std::setw(2) << now->tm_min << ":"
        << std::setfill('0') << std::setw(2) << now->tm_sec;
    fecha_hora = fecha_hora_stream.str();
}

int Cotizacion::getIdCotizacion()
{
    return id_cotizacion;
}

std::string Cotizacion::getPrendaCotizada()
{
    return prenda_cotizada;
}

int Cotizacion::getCantidad()
{
    return cantidad;
}

float Cotizacion::getResultado()
{
    return resultado;
}

std::string Cotizacion::getFechaHora()
{
    return fecha_hora;
}
