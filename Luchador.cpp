#include "Luchador.h"

Luchador::Luchador(const std::string& nombre, int edad)
    : nombre(nombre), edad(edad) {}

std::string Luchador::obtenerNombre() const {
    return nombre;
}

int Luchador::obtenerEdad() const {
    return edad;
}
