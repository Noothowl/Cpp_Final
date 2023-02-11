#include <string>
#include <vector>
#include "Prenda.cpp";
using namespace std;

// Clase Tienda
class Tienda {
private:
    string nombre;
    string direccion;
    vector<Prenda*> prendas;

public:
    Tienda(string nombre, string direccion) : nombre(nombre), direccion(direccion) {}

    void agregarPrenda(Prenda* prenda) {
        prendas.push_back(prenda);
    }
};