#include <string>
#include <vector>


// Clase abstracta Prenda
class Prenda {
protected:
    enum Calidad { Estandar, Premium };
    double precioBase;
    Calidad calidad;
    int precioUnitario;
    int stock;

    enum TipoCuello { Mao, Normal };
    enum TipoPantalon { Chupin, Comun };
    enum TipoManga { Corta, Larga };

public:
    Prenda(Calidad calidad, float precioUnitario, int stock)
        : calidad(calidad), precioUnitario(precioUnitario), stock(stock) {}

    Prenda(double precioBase, Calidad calidad) : precioBase(precioBase), calidad(calidad) {}
    virtual double calcularPrecio() {
        return precioBase;
    }

    virtual ~Prenda() {}

};

class Pantalon : public Prenda {

public:
    Pantalon(Calidad calidad, float precioUnitario, int stock, TipoPantalon tipo)
        : Prenda(calidad, precioUnitario, stock), tipo(tipo) {}

    TipoPantalon tipo;
};

class Camisa : public Prenda {
public:
    Camisa(double precioBase, Calidad calidad, TipoManga manga, TipoCuello cuello) : Prenda(precioBase, calidad), manga(manga), cuello(cuello) {}
    double calcularPrecio() override {
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
    TipoManga manga;
    TipoCuello cuello;
    TipoManga tipoManga;
    TipoCuello tipoCuello;
};