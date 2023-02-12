#include <iostream>
#include <string>
#include "MenuPrincipal.cpp"

using namespace std;

int main() {
    Tienda tienda("Mi Tienda", "Mi Direccion");
    Vendedor vendedor("Juan", "P�rez", 1);
    MenuPrincipal menu(vendedor, tienda);
    menu.iniciar();
    return 0;
}