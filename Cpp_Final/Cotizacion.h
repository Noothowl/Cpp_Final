#pragma once
#include <string>
#include <ctime>

class Cotizacion
{
public:
    Cotizacion(int id_cotizacion, std::string prenda_cotizada, int cantidad, float resultado);
    int getIdCotizacion();
    std::string getPrendaCotizada();
    int getCantidad();
    float getResultado();
    std::string getFechaHora();

private:
    int id_cotizacion;
    std::string prenda_cotizada;
    int cantidad;
    float resultado;
    std::string fecha_hora;
};

