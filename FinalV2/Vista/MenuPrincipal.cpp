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

    void verHistorial() {
        
        cout << "Historial de Cotizaciones" << endl;
        cout << "ID\tFecha\t\tHora\t\tCotizacion\tCantidad\tTotal" << endl;
        for (auto& cotizacion : vendedor.getHistorial()) {
            cout << cotizacion.second.getIdCotizacion() << "\t" << cotizacion.second.getFecha() << "\t" << cotizacion.second.getHora() << "\t\t" << cotizacion.second.getCotPrenda() << "\t\t" << cotizacion.second.getCantPrenda() << "\t\t" << cotizacion.second.getResultado() << endl;
        }
    }

    void iniciar() {
        int opcion;
        do {
            system("cls");
            mostrarDatos();
            mostrarOpciones();
            cout << "Seleccione una opcion: ";
            cin >> opcion;
            switch (opcion) {
            case 1:
                system("cls");
                verHistorial();
                cout << "Enter para contiuar";
                cin.get();
                cin.get();
                break;
            case 2:
                
                break;
            case 3:
                cout << "Saliendo..." << endl;
                break;
            default:
                system("cls");
                cout << "Opcion no valida, por favor seleccione una opcion valida" << endl;
                cout << "Enter para contiuar";
                cin.get();
                cin.get();
            }
            
        } while (opcion != 3);
    }
};
