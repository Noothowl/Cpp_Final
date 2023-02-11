#pragma once
#ifndef PRENDA_H
#define PRENDA_H

#include <iostream>

class Prenda {
private:
    std::string calidad;
    double precioUnitario;
    int stock;

public:
    Prenda(std::string calidad, double precioUnitario, int stock);
    void mostrarInfo();
};

#endif
