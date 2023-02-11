#pragma once
#ifndef PRENDA_H
#define PRENDA_H

class Prenda {
public:
	Prenda(float precioUnitario, int stock);

	void setPrecioUnitario(float precioUnitario);
	float getPrecioUnitario() const;

	void setStock(int stock);
	int getStock() const;

private:
	float precioUnitario_;
	int stock_;
};

#endif  // PRENDA_H