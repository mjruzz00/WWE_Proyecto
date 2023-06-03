#include "Campeonato.h"

Campeonato::Campeonato(const std::string& nombre, int edad, const std::string& categoria)
    : nombre(nombre), edad(edad), categoria(categoria) {}

std::string Campeonato::obtenerNombre() const {
    return nombre;
}

int Campeonato::obtenerEdad() const {
    return edad;
}

std::string Campeonato::obtenerCategoria() const {
    return categoria;
}
