#include <iostream>
#include "Luchador.h"
#include "Campeonato.h"
#include "Evento.h"
#include "Arena.h"

int main() {
    Luchador luchador("John Cena", 44);
    std::cout << "Nombre del luchador: " << luchador.obtenerNombre() << std::endl;
    std::cout << "Edad del luchador: " << luchador.obtenerEdad() << std::endl;

    Campeonato campeonato("WWE Championship", 37, "Heavyweight");
    std::cout << "Nombre del campeonato: " << campeonato.obtenerNombre() << std::endl;
    std::cout << "Edad del campeón: " << campeonato.obtenerEdad() << std::endl;
    std::cout << "Categoría del campeonato: " << campeonato.obtenerCategoria() << std::endl;

    Evento evento("WrestleMania", "28 de Octubre, 2023");
    std::cout << "Nombre del evento: " << evento.obtenerNombre() << std::endl;
    std::cout << "Fecha del evento: " << evento.obtenerFecha() << std::endl;

    Arena arena("Amway Center", "Orlando, Florida");
    std::cout << "Nombre de la arena: " << arena.obtenerNombre() << std::endl;
    std::cout << "Ubicación de la arena: " << arena.obtenerUbicacion() << std::endl;

    return 0;
}
