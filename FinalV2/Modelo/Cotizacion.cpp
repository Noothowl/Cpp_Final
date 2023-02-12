#include <iostream>
#include <map>
#include <string>
#include <ctime>

using namespace std;

// Clase Cotizacion
class Cotizacion {
    int id;
    string fecha;
    string hora;
    int idVendedor;
    int cotPrenda;
    int cantPrenda;
    int resultadoCalculo;

public:
    Cotizacion(){}
    Cotizacion(int id, string fecha, string hora, int idVendedor, int cotPrenda, int cantPrenda, int resultadoCalculo) {
        this->id = id;
        this->fecha = fecha;
        this->hora = hora;
        this->idVendedor = idVendedor;
        this->cotPrenda = cotPrenda;
        this->cantPrenda = cantPrenda;
        this->resultadoCalculo = resultadoCalculo;
    }
};
