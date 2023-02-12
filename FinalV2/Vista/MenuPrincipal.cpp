#include "MenuPrincipal.h"
#include "../Modelo/Vendedor.h"
#include "../Modelo/Tienda.h"
#include <iostream>

using namespace std;

MenuPrincipal::MenuPrincipal(Vendedor* vendedor, Tienda* tienda)
    : vendedor(vendedor), tienda(tienda) {}

void MenuPrincipal::mostrarMensajeBienvenida() const {
    cout << "Bienvenido " << vendedor->getNombre() << " " << vendedor->getApellido() << " (ID: " << vendedor->getId() << ")" << endl;
    cout << "Tienda: " << tienda->getNombre() << " (" << tienda->getDireccion() << ")" << endl;
}

void MenuPrincipal::mostrarMenu() const {
    int opcion;

    do
    {   
        system("cls");
        mostrarMensajeBienvenida();
        cout << "\n============================\n";
        cout << "1. Historial de cotizaciones" << endl;
        cout << "2. Añadir Cotizacion" << endl;
        cout << "3. Cerrar programas" << endl;
        cout << "\n============================\n";


        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            mostrarHistorialCotizaciones();
            cout << "\nEnter para continuar";
            cin.get();
            cin.get();
            break;
        case 2:
            system("cls");
            inputCotizacionPrenda();
            inputCotizacionCalidad();
            cout << "\nEnter para continuar";
            cin.get();
            cin.get();
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
        }


    } while (opcion!=3);

}

void MenuPrincipal::inputCotizacionCalidad()const {
    int op = 0, cant;
    double p_base;
    bool premium;

    cout << "\n============================\n";
    cout << "Ingresar calidad prenda: ";
    cout << "\n============================\n";

    cout << "1. Estandar" << endl;
    cout << "2. Premium" << endl;
    cout << "3. Volver home menu" << endl;
    cin >> op;

    if (op == 1)
    {   
        premium = false;

        cout << "\n============================\n";
        cout << "Ingresar precio base prenda: ";
        cout << "\n============================\n";
        
        cin >> p_base;

        cout << "\n============================\n";
        cout << "Ingresar cantidad prenda: ";
        cout << "\n============================\n";

        cin >> cant;



    }
    else if (op == 2) {
        premium = true;

        cout << "\n============================\n";
        cout << "Ingresar precio base prenda: ";
        cout << "\n============================\n";

        cin >> p_base;

        cout << "\n============================\n";
        cout << "Ingresar cantidad prenda: ";
        cout << "\n============================\n";

        cin >> cant;



    }
    else mostrarMenu();

}


void MenuPrincipal::mostrarHistorialCotizaciones() const{
    std::map<int, Cotizacion> historial = vendedor->getHistorial();

    if (historial.empty()) {
        std::cout << "No hay cotizaciones registradas para este vendedor." << std::endl;
        return;
    }

    std::cout << "Historial de cotizaciones del vendedor:" << std::endl;
    for (auto const& cotizacion : historial) {
        std::cout << cotizacion.second.toString() << std::endl;
        cout << "\n";
    }

}

void MenuPrincipal::inputCotizacionPrenda()const {
    int op_cot1=0, op_cot2=0, op_cot3=0, op_cot4=0;
    bool camisa, chupin, mao,mangacor ;

    cout << "\n============================\n";
    cout << "Ingresar tipo prenda: ";
    cout << "\n============================\n";

    cout << "1. Camisa" << endl;
    cout << "2. Pantalon" << endl;
    cout << "3. Volver home menu" << endl;

    cin >> op_cot1;

        switch (op_cot1)
        {
            case 1:
                camisa = true;
                system("cls");
                cout << "\n============================\n";
                cout << "Ingresar tipo manga: ";
                cout << "\n============================\n";

                cout << "1. Manga Corta" << endl;
                cout << "2. Manga Larga" << endl;
                cout << "3. Volver home menu" << endl;
                cin >> op_cot3;

                switch (op_cot3)
                {
                case 1:
                    mangacor = true;
                    cout << "\n============================\n";
                    cout << "Ingresar tipo cuello: ";
                    cout << "\n============================\n";

                    cout << "1. CuelloMao" << endl;
                    cout << "2. CuelloNormal" << endl;
                    cout << "3. Volver home menu" << endl;
                    cin >> op_cot4;
                    if (op_cot4 == 1) {
                        mao = true;
                    }
                    break;



                case 2:
                    mangacor = false;
                    cout << "\n============================\n";
                    cout << "Ingresar tipo cuello: ";
                    cout << "\n============================\n";

                    cout << "1. CuelloMao" << endl;
                    cout << "2. CuelloNormal" << endl;
                    cout << "3. Volver home menu" << endl;

                    cin >> op_cot4;
                    if (op_cot4 == 2) {
                        mao = false;
                    }
                    break;




                default:
                    mostrarMenu();

                    break;
                }


            case 2:
                camisa = false;
                system("cls");
                cout << "\n============================\n";
                cout << "Ingresar tipo Pantalon: ";
                cout << "\n============================\n";

                cout << "1. Chupin" << endl;
                cout << "2. Chupin't" << endl;
                cout << "3. Volver home menu" << endl;
                cin >> op_cot2;
                switch (op_cot2)
                {
                case 1:
                    chupin = true;
                    break;

                case 2:
                    chupin = false;
                    break;

                default:
                    mostrarMenu();
                    break;
                }
            default:
                mostrarMenu();
                break;
        }
        
        mostrarMenu();


}

