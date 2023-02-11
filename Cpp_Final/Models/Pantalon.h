#pragma once
#ifndef PANTALON_H
#define PANTALON_H

#include "Prenda.h"

class Pantalon : public Prenda {
public:
	enum Tipo { Comun, Chupin };

	Pantalon(float precioUnitario, int stock, Tipo tipo);

	void setTipo(Tipo tipo);
	Tipo getTipo() const;

private:
	Tipo tipo_;
};

#endif 