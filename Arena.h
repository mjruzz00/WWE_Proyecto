#ifndef ARENA_H
#define ARENA_H

#include <string>

class Arena {
private:
    std::string nombre;
    std::string ubicacion;

public:
    Arena(const std::string& nombre, const std::string& ubicacion);
    std::string obtenerNombre() const;
    std::string obtenerUbicacion() const;
};

#endif
