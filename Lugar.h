#ifndef LUGAR_H
#define LUGAR_H

#include <string>

class Lugar {
protected:
    std::string nombre;
    std::string ubicacion;

public:
    Lugar(const std::string& nombre, const std::string& ubicacion);
    virtual ~Lugar() {}

    virtual std::string obtenerNombre() const;
    virtual std::string obtenerUbicacion() const;

    virtual void imprimirInformacion() const = 0;
};

#endif
