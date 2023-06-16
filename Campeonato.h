#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <string>

class Campeonato {
private:
    std::string nombre;
    int edad;
    std::string categoria;

public:
    Campeonato(const std::string& nombre, int edad, const std::string& categoria);

    std::string obtenerNombre() const;
    int obtenerEdad() const;
    std::string obtenerCategoria() const;
};

#endif
