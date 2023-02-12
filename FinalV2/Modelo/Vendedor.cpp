#include <iostream>
#include <iostream>
#include <vector>
#include <ctime>
#include "Cotizacion.cpp"
#include "Prenda.cpp"

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

    string getNombre() {
        return nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    string getApellido() {
        return apellido;
    }

    void setApellido(string apellido) {
        this->apellido = apellido;
    }

    int getId() {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }

    map<int, Cotizacion> getHistorial() {
        return historial;
    }

    void realizarCotizacion(int idCotizacion, int idVendedor, Prenda* cotPrenda, int cantPrenda) {
        int resultado = cotPrenda->calcularPrecio() * cantPrenda;
        time_t t = time(0);
        struct tm ahora;
        localtime_s(&ahora, &t);
        string fecha = to_string(ahora.tm_mday) + "/" + to_string(ahora.tm_mon + 1) + "/" + to_string(ahora.tm_year + 1900);
        string hora = to_string(ahora.tm_hour) + ":" + to_string(ahora.tm_min) + ":" + to_string(ahora.tm_sec);
        Cotizacion cotizacion(idCotizacion, fecha, hora, idVendedor, cotPrenda, cantPrenda, resultado);
        historial[idCotizacion] = cotizacion;
    }
};