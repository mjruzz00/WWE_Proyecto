#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <string>
#include "Luchador.h"

class Campeonato : public Luchador {
private:
    std::string categoria;

public:
    Campeonato(const std::string& nombre, int edad, const std::string& categoria);
    std::string obtenerCategoria() const;
};

#endif
