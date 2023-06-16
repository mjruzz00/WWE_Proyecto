#ifndef ARENA_H
#define ARENA_H

#include "Lugar.h"

class Arena : public Lugar {
public:
    Arena(const std::string& nombre, const std::string& ubicacion);

    void imprimirInformacion() const override;
};

#endif
