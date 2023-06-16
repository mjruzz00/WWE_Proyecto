#include "Arena.h"
#include <iostream>

Arena::Arena(const std::string& nombre, const std::string& ubicacion)
    : Lugar(nombre, ubicacion) {}

void Arena::imprimirInformacion() const {
    std::cout << "Nombre de la arena: " << nombre << std::endl;
    std::cout << "Ubicación de la arena: " << ubicacion << std::endl;
}
