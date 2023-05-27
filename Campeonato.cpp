#include "Campeonato.h"

Campeonato::Campeonato(const std::string& nombre, int edad, const std::string& categoria)
    : Luchador(nombre, edad), categoria(categoria) {}

std::string Campeonato::obtenerCategoria() const {
    return categoria;
}
