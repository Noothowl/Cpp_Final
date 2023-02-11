#include <iostream>
#include <string>

class Vista {
public:
    Vista() {}

    void mostrarMenuPrincipal() {
        std::cout << "Datos del vendedor y tienda:" << std::endl;
        std::cout << "Nombre: " << "" << std::endl;
        std::cout << "Apellido: " << "" << std::endl;
        std::cout << "ID: " << "" << std::endl;
        std::cout << "Tienda: " << "" << std::endl;
        std::cout << "-----------------------------" << std::endl;
        std::cout << "1) Historial de cotizaciones" << std::endl;
        std::cout << "2) Realizar cotización" << std::endl;
        std::cout << "3) Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
    }
};
