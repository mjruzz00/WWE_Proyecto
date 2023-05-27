#include "Arena.h"

Arena::Arena(const std::string& nombre, const std::string& ubicacion)
    : nombre(nombre), ubicacion(ubicacion) {}

std::string Arena::obtenerNombre() const {
    return nombre;
}

std::string Arena::obtenerUbicacion() const {
    return ubicacion;
}
