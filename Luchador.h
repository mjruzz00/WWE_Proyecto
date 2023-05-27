#ifndef LUCHADOR_H
#define LUCHADOR_H

#include <string>

class Luchador {
private:
    std::string nombre;
    int edad;

public:
    Luchador(const std::string& nombre, int edad);
    std::string obtenerNombre() const;
    int obtenerEdad() const;
};

#endif
