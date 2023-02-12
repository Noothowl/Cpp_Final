#ifndef PRENDA_H
#define PRENDA_H
#include<string>
enum class Calidad { Estandar, Premium };

// Clase abstracta Prenda
class Prenda {
protected:
    double precioBase;
    Calidad calidad;
    int precioUnitario;
    int stock;

public:
    Prenda(double precioBase, Calidad calidad, int precioUnitario, int stock);
    virtual ~Prenda() {}
    virtual std::string getNombre() const = 0;
    int getStock() {
        return stock;
    }
    void setStock(int stock) {
        this->stock = stock;
    }
    int getPrecioBase() {
        return precioBase;
    }


    virtual double calcularPrecio();
};

class Pantalon : public Prenda {
public:
    enum class TipoPantalon { Chupin, Comun };
    Pantalon(double precioBase, Calidad calidad, int precioUnitario, int stock, TipoPantalon tipo);
    std::string getNombre() const override {
        return "Pantalón";
    }
    double calcularPrecio() override;
    TipoPantalon tipo;
};

class Camisa : public Prenda {
public:
    enum class TipoManga { Corta, Larga };
    enum class TipoCuello { Mao, Normal };
    Camisa(double precioBase, Calidad calidad, int precioUnitario, int stock, TipoManga manga, TipoCuello cuello);
    std::string getNombre() const override {
        return "Camisa";
    }
    double calcularPrecio() override;

    TipoManga manga;
    TipoCuello cuello;
};

#endif
