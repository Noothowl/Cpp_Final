#include <iostream>
#include <iostream>
#include <vector>
#include <ctime>
#include "Cotizacion.cpp"

class Vendedor {
    string nombre;
    string apellido;
    int id;
    map<int, Cotizacion> historial;

public:
    Vendedor(string nombre, string apellido, int id) {
        this->nombre = nombre;
        this->apellido = apellido;
        this->id = id;
    }

    void realizarCotizacion(int idCotizacion, int idVendedor, int cotPrenda, int cantPrenda) {
        int resultado = cotPrenda * cantPrenda;
        time_t t = time(0);
        struct tm ahora;
        localtime_s(&ahora, &t);
        string fecha = to_string(ahora.tm_mday) + "/" + to_string(ahora.tm_mon + 1) + "/" + to_string(ahora.tm_year + 1900);
        string hora = to_string(ahora.tm_hour) + ":" + to_string(ahora.tm_min) + ":" + to_string(ahora.tm_sec);
        Cotizacion cotizacion(idCotizacion, fecha, hora, idVendedor, cotPrenda, cantPrenda, resultado);
        historial[idCotizacion] = cotizacion;
    }
};