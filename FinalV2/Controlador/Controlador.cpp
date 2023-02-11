#include <iostream>
#include <vector>
#include <ctime>
#include "../Modelo/Vendedor.cpp"


class Controlador {
private:
    Vendedor vendedor;

public:
    Controlador(Vendedor vendedor) : vendedor(vendedor) {}

    void realizarCotizacion(int id, int idVendedor, int cotPrenda, int cantPrenda) {
        vendedor.realizarCotizacion(id, idVendedor, cotPrenda, cantPrenda);
    }


};