#include "MenuPrincipal.h"
#include "../Modelo/Vendedor.h"
#include "../Modelo/Tienda.h"

int main() {
    // Crear vendedor y tienda
    Vendedor* vendedor = new Vendedor("Juan", "Pérez", 1);
    Tienda* tienda = new Tienda("Mi Tienda", "Calle 123");

    // Crear menú principal y mostrarlo
    MenuPrincipal menu(vendedor, tienda);
    menu.mostrarMensajeBienvenida();
    menu.mostrarMenu();

    // Liberar memoria de los objetos creados
    delete vendedor;
    delete tienda;

    return 0;
}
