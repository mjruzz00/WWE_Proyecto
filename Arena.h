#ifndef ARENA_H
#define ARENA_H

#include <string>

class Lugar {
public:
    virtual std::string obtenerNombre() const = 0;
    virtual std::string obtenerUbicacion() const = 0;
};

class Arena : public Lugar {
private:
    std::string nombre;
    std::string ubicacion;

public:
    Arena(const std::string& nombre, const std::string& ubicacion);
    std::string obtenerNombre() const override;
    std::string obtenerUbicacion() const override;
};

#endif
