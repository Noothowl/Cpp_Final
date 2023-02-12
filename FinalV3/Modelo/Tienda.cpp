#include <string>
#include <vector>

#include "Prenda.cpp"

using namespace std;

// Clase Tienda
class Tienda {
private:
    string nombre;
    string direccion;
    vector<Prenda*> prendas;

public:
    Tienda(string nombre, string direccion) : nombre(nombre), direccion(direccion) {}

    string getNombre() {
        return nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    string getDireccion() {
        return direccion;
    }

    void setDireccion(string direccion) {
        this->direccion = direccion;
    }

    vector<Prenda*> getPrendas() {
        return prendas;
    }

    void agregarPrenda(Prenda* prenda) {
        prendas.push_back(prenda);
    }
};