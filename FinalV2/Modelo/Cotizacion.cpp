#include <iostream>
#include <map>
#include <string>
#include <ctime>

using namespace std;

// Clase Cotizacion
class Cotizacion {
    int idCotizacion;
    string fecha;
    string hora;
    int idVendedor;
    int cotPrenda;
    int cantPrenda;
    int resultado;

public:
    Cotizacion(){}

    Cotizacion(int idCotizacion, string fecha, string hora, int idVendedor, int cotPrenda, int cantPrenda, int resultado)
        : idCotizacion(idCotizacion), fecha(fecha), hora(hora), idVendedor(idVendedor), cotPrenda(cotPrenda), cantPrenda(cantPrenda), resultado(resultado) {}

    // Getters
    int getIdCotizacion() {
        return idCotizacion;
    }

    string getFecha() {
        return fecha;
    }

    string getHora() {
        return hora;
    }

    int getIdVendedor() {
        return idVendedor;
    }

    int getCotPrenda() {
        return cotPrenda;
    }

    int getCantPrenda() {
        return cantPrenda;
    }

    int getResultado() {
        return resultado;
    }

    // Setters
    void setIdCotizacion(int idCotizacion) {
        this->idCotizacion = idCotizacion;
    }

    void setFecha(string fecha) {
        this->fecha = fecha;
    }

    void setHora(string hora) {
        this->hora = hora;
    }

    void setIdVendedor(int idVendedor) {
        this->idVendedor = idVendedor;
    }

    void setCotPrenda(int cotPrenda) {
        this->cotPrenda = cotPrenda;
    }

    void setCantPrenda(int cantPrenda) {
        this->cantPrenda = cantPrenda;
    }

    void setResultado(int resultado) {
        this->resultado = resultado;
    }
};
