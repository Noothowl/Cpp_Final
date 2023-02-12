#include "Prenda.h"

Prenda::Prenda(double precioBase, Calidad calidad, int precioUnitario, int stock)
    : precioBase(precioBase), calidad(calidad), precioUnitario(precioUnitario), stock(stock) {}

double Prenda::calcularPrecio() {
    return precioBase;
}

Pantalon::Pantalon(double precioBase, Calidad calidad, int precioUnitario, int stock, TipoPantalon tipo)
    : Prenda(precioBase, calidad, precioUnitario, stock), tipo(tipo) {}

double Pantalon::calcularPrecio() {
    double precioFinal = precioBase;
    if (tipo == TipoPantalon::Chupin)
    {
        precioFinal *= 0.12;
    }
    return precioFinal;
}

Camisa::Camisa(double precioBase, Calidad calidad, int precioUnitario, int stock, TipoManga manga, TipoCuello cuello)
    : Prenda(precioBase, calidad, precioUnitario, stock), manga(manga), cuello(cuello) {}

double Camisa::calcularPrecio() {
    double precioFinal = precioBase;
    if (manga == TipoManga::Corta) {
        precioFinal *= 0.9;
    }
    if (cuello == TipoCuello::Mao) {
        precioFinal *= 1.03;
    }
    if (calidad == Calidad::Premium) {
        precioFinal *= 1.3;
    }
    return precioFinal;
}
