#include "Pantalon.h"

Pantalon::Pantalon(float precioUnitario, int stock, Tipo tipo)
    : Prenda(precioUnitario, stock), tipo_(tipo) {}

void Pantalon::setTipo(Tipo tipo) { tipo_ = tipo; }

Pantalon::Tipo Pantalon::getTipo() const { return tipo_; }