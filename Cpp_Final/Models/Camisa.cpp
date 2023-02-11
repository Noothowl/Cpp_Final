#include "camisa.h"

Camisa::Camisa(float precioUnitario, int stock, bool mangaCorta, bool cuelloMao)
    : Prenda(precioUnitario, stock), mangaCorta_(mangaCorta), cuelloMao_(cuelloMao) {}

void Camisa::setMangaCorta(bool mangaCorta) { mangaCorta_ = mangaCorta; }

bool Camisa::getMangaCorta() const { return mangaCorta_; }

void Camisa::setCuelloMao(bool cuelloMao) { cuelloMao_ = cuelloMao; }

bool Camisa::getCuelloMao() const { return cuelloMao_; }