#include <iostream>
#include <string>
#include "../Modelo/Vendedor.cpp"
#include "../Modelo/Tienda.cpp"

using namespace std;

class MenuPrincipal {
private:
    Vendedor vendedor;
    Tienda tienda;

public:
    MenuPrincipal(Vendedor vendedor, Tienda tienda) : vendedor(vendedor), tienda(tienda) {}

    void mostrarDatos() {
        cout << "Nombre del vendedor: " << vendedor.getNombre() << " " << vendedor.getApellido() << " | ID: " << vendedor.getId() << endl;
        cout << "\n";
        cout << "Nombre de la tienda:" <<tienda.getNombre()<<" Direccion de la tienda : " << tienda.getDireccion() << endl;
    }

    void mostrarOpciones() {
        cout << "1) Historial de cotizaciones" << endl;
        cout << "2) Realizar cotizacion" << endl;
        cout << "3) Salir" << endl;
    }


    void iniciar() {
        int opcion;
        do {
            mostrarDatos();
            mostrarOpciones();
            cout << "Seleccione una opcion: ";
            cin >> opcion;
            switch (opcion) {
            case 1:
                // Aqu� ir�a la implementaci�n de la opci�n 1, historial de cotizaciones
                break;
            case 2:
                // Aqu� ir�a la implementaci�n de la opci�n 2, realizar cotizaci�n
                break;
            case 3:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida, por favor seleccione una opcion valida" << endl;
            }
        } while (opcion != 3);
    }
};
