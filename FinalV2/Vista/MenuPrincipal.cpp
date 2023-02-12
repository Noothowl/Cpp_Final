#include "MenuPrincipal.h"
#include "../Modelo/Vendedor.h"
#include "../Modelo/Tienda.h"
#include <iostream>

using namespace std;

MenuPrincipal::MenuPrincipal(Vendedor* vendedor, Tienda* tienda)
    : vendedor(vendedor), tienda(tienda) {}

void MenuPrincipal::mostrarMensajeBienvenida() const {
    cout << "Bienvenido " << vendedor->getNombre() << " " << vendedor->getApellido() << " (ID: " << vendedor->getId() << ")" << endl;
    cout << "Tienda: " << tienda->getNombre() << " (" << tienda->getDireccion() << ")" << endl;
}

void MenuPrincipal::mostrarMenu() const {
    cout << "1. Opci�n 1" << endl;
    cout << "2. Opci�n 2" << endl;
    cout << "3. Opci�n 3" << endl;

     int opcion;
    cout << "Seleccione una opci�n: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            mostrarHistorialCotizaciones();
            break;
        case 2:
            // Opci�n 2
            break;
        case 3:
            // Opci�n 3
            break;
        default:
            cout << "Opci�n no v�lida" << endl;
            break;
    }
}

void MenuPrincipal::mostrarHistorialCotizaciones() const{
    std::map<int, Cotizacion> historial = vendedor->getHistorial();

    if (historial.empty()) {
        std::cout << "No hay cotizaciones registradas para este vendedor." << std::endl;
        return;
    }

    std::cout << "Historial de cotizaciones del vendedor:" << std::endl;
    for (auto const& cotizacion : historial) {
        std::cout << cotizacion.second.toString() << std::endl;
    }

}

