#include "MenuPrincipal.h"
#include "../Modelo/Vendedor.h"
#include "../Modelo/Tienda.h"

int main() {
    // Crear vendedor y tienda
    Vendedor* vendedor = new Vendedor("Juan", "Perez", 1);
    Tienda* tienda = new Tienda("Mi Tienda", "Calle 123");
    Prenda* camisa = new Camisa(100.0, Calidad::Premium, 50, 10, Camisa::TipoManga::Larga, Camisa::TipoCuello::Mao);
    vendedor->realizarCotizacion(1, vendedor->getId(), camisa, 2);

    // Crear menú principal y mostrarlo
    MenuPrincipal menu(vendedor, tienda);
    menu.mostrarMenu();
    
    // Liberar memoria de los objetos creados
    delete vendedor;
    delete tienda;
    delete camisa;
    return 0;
}
