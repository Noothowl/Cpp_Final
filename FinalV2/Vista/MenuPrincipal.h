#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <string>

class Vendedor;
class Tienda;

class MenuPrincipal {
private:
    Vendedor* vendedor;
    Tienda* tienda;

public:
    MenuPrincipal(Vendedor* vendedor, Tienda* tienda);

    void mostrarMensajeBienvenida() const;
    void mostrarMenu() const;
};

#endif // MENUPRINCIPAL_H
