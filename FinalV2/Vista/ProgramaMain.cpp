#include <iostream>

int main() {
    int opcion;
    do {
        std::cout << "Datos del vendedor (nombre, apellido e id) y la tienda (utilizar variables en blanco DE MOMENTO podr�a ser �til)\n"
            << "1) Historial de Cotizaciones\n"
            << "2) Realizar Cotizacioes\n"
            << "3) Salir\n"
            << "Seleccione una opcion: ";
        std::cin >> opcion;
        switch (opcion) {
        case 1:
            // Aqu� se implementar�a la opci�n de Historial de Cotizaciones
            break;
        case 2:
            // Aqu� se implementar�a la opci�n de Realizar Cotizaciones
            break;
        case 3:
            // Aqu� se implementar�a la opci�n de Salir
            break;
        default:
            std::cout << "Opcion incorrecta, por favor seleccione una opcion valida\n";
            break;
        }
    } while (opcion != 3);
    return 0;
}
