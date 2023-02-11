#pragma once
#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <vector>
#include "prenda.h"

class Tienda {
private:
    std::string nombre;
    std::string direccion;
    std::vector<Prenda> prendas;

public:
    Tienda(std::string nombre, std::string direccion);
    void agregarPrenda(Prenda prenda);
    void listarPrendas();
};

#endif

