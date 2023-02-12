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
}
