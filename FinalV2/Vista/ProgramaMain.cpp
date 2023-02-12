#include <iostream>

int main() {
    int opcion;
    do {
        std::cout << "Datos del vendedor (nombre, apellido e id) y la tienda (utilizar variables en blanco DE MOMENTO podría ser útil)\n"
            << "1) Historial de Cotizaciones\n"
            << "2) Realizar Cotizacioes\n"
            << "3) Salir\n"
            << "Seleccione una opcion: ";
        std::cin >> opcion;
        switch (opcion) {
        case 1:
            // Aquí se implementaría la opción de Historial de Cotizaciones
            break;
        case 2:
            // Aquí se implementaría la opción de Realizar Cotizaciones
            break;
        case 3:
            // Aquí se implementaría la opción de Salir
            break;
        default:
            std::cout << "Opcion incorrecta, por favor seleccione una opcion valida\n";
            break;
        }
    } while (opcion != 3);
    return 0;
}
