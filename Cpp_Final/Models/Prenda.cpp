#include "prenda.h"

Prenda::Prenda(float precioUnitario, int stock)
    : precioUnitario_(precioUnitario), stock_(stock) {}

void Prenda::setPrecioUnitario(float precioUnitario) {
    precioUnitario_ = precioUnitario;
}

float Prenda::getPrecioUnitario() const { return precioUnitario_; }

void Prenda::setStock(int stock) { stock_ = stock; }

int Prenda::getStock() const { return stock_; }