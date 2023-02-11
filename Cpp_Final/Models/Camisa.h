#pragma once
#ifndef CAMISA_H
#define CAMISA_H

#include "prenda.h"

class Camisa : public Prenda {
public:
	Camisa(float precioUnitario, int stock, bool mangaCorta, bool cuelloMao);

	void setMangaCorta(bool mangaCorta);
	bool getMangaCorta() const;

	void setCuelloMao(bool cuelloMao);
	bool getCuelloMao() const;

private:
	bool mangaCorta_;
	bool cuelloMao_;
};

#endif  // CAMISA_H