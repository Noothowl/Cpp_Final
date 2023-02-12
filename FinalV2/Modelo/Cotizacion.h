
#ifndef COTIZACION_H
#define COTIZACION_H

#include <string>
#include "Prenda.h"

class Cotizacion {
private:
    int idCotizacion;
    std::string fecha;
    std::string hora;
    int idVendedor;
    Prenda* cotPrenda;
    int cantPrenda;
    int resultado;

public:
    Cotizacion();

    Cotizacion(int idCotizacion, std::string fecha, std::string hora, int idVendedor, Prenda* cotPrenda, int cantPrenda, int resultado);

    // Getters
    int getIdCotizacion();
    std::string getFecha();
    std::string getHora();
    int getIdVendedor();
    Prenda* getCotPrenda();
    int getCantPrenda();
    int getResultado();

    // Setters
    void setIdCotizacion(int idCotizacion);
    void setFecha(std::string fecha);
    void setHora(std::string hora);
    void setIdVendedor(int idVendedor);
    void setCotPrenda(Prenda* cotPrenda);
    void setCantPrenda(int cantPrenda);
    void setResultado(int resultado);
};

#endif
