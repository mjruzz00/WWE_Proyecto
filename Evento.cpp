#include "Evento.h"

Evento::Evento(const std::string& nombre, const std::string& fecha)
    : nombre(nombre), fecha(fecha) {}

std::string Evento::obtenerNombre() const {
    return nombre;
}

std::string Evento::obtenerFecha() const {
    return fecha;
}
