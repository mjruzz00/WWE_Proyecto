#include <iostream>
#include "Lugar.h"
#include "Arena.h"
#include "Campeonato.h"
#include "Evento.h"
#include "Luchador.h"

int main() {
    Lugar* arena = new Arena("Amway Center", "Orlando, Florida");
    arena->imprimirInformacion();
    delete arena;

    Campeonato campeonato("WWE Championship", 37, "Heavyweight");
    std::cout << "Nombre del campeonato: " << campeonato.obtenerNombre() << std::endl;
    std::cout << "Edad del campeón: " << campeonato.obtenerEdad() << std::endl;
    std::cout << "Categoría del campeonato: " << campeonato.obtenerCategoria() << std::endl;

    Evento evento("WrestleMania", "28 de Octubre, 2023");
    std::cout << "Nombre del evento: " << evento.obtenerNombre() << std::endl;
    std::cout << "Fecha del evento: " << evento.obtenerFecha() << std::endl;

    Luchador luchador("John Cena", 44);
    std::cout << "Nombre del luchador: " << luchador.obtenerNombre() << std::endl;
    std::cout << "Edad del luchador: " << luchador.obtenerEdad() << std::endl;

    return 0;
}
