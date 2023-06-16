#ifndef EVENTO_H
#define EVENTO_H

#include <string>

class Evento {
private:
    std::string nombre;
    std::string fecha;

public:
    Evento(const std::string& nombre, const std::string& fecha);

    std::string obtenerNombre() const;
    std::string obtenerFecha() const;
};

#endif
