+----------------+           +--------------+       +-----------+
|     Lugar      |           |    Arena     |       |  Campeonato|
+----------------+           +--------------+       +-----------+
| - nombre       |           | - nombre     |       | - nombre  |
| - ubicacion    |           | - ubicacion  |       | - edad    |
+----------------+           +--------------+       | - categoria |
| + obtenerNombre() |         | + obtenerNombre() |   +-----------+
| + obtenerUbicacion() |      | + obtenerUbicacion()|
| + imprimirInformacion() |   +-------------------+
+-----------------+         | + imprimirInformacion() |
                            +-------------------+
                               ^
                               |
                          +--------------+
                          |    Evento    |
                          +--------------+
                          | - nombre     |
                          | - fecha      |
                          +--------------+
                          | + obtenerNombre() |
                          | + obtenerFecha()  |
                          +--------------+
                                 ^
                                 |
                           +---------------+
                           |   Luchador    |
                           +---------------+
                           | - nombre      |
                           | - edad        |
                           +---------------+
                           | + obtenerNombre() |
                           | + obtenerEdad()   |
                           +---------------+

/*
Clase Lugar:

Es una clase abstracta que representa un lugar genérico.
Contiene los atributos privados nombre y ubicacion, que representan el nombre y la ubicación del lugar, respectivamente.
Define los métodos abstractos obtenerNombre() y obtenerUbicacion(), que deben ser implementados por las clases derivadas.
También incluye el método público imprimirInformacion(), que es un método común para imprimir información general del lugar.
--------------------------------------------------------------
Clase Arena:

Es una clase que hereda de la clase abstracta Lugar.
Tiene los atributos privados nombre y ubicacion, que representan el nombre y la ubicación específica de la arena.
Implementa los métodos obtenerNombre() y obtenerUbicacion() heredados de la clase Lugar.
Además, incluye su propio método imprimirInformacion(), que imprime información específica de la arena.

--------------------------------------------------------------------
Clase Campeonato:

Representa un campeonato.
Contiene los atributos privados nombre, edad y categoria, que representan el nombre del campeonato, la edad mínima requerida y la categoría del campeonato, respectivamente.
Proporciona los métodos públicos obtenerNombre(), obtenerEdad() y obtenerCategoria() para obtener la información del campeonato.
------------------------------------------------------------------------------------
Clase Evento:

Representa un evento relacionado con los lugares.
Tiene los atributos privados nombre y fecha, que representan el nombre del evento y la fecha en que se llevará a cabo.
Proporciona los métodos públicos obtenerNombre() y obtenerFecha() para obtener la información del evento.
*/

/*
Clase Luchador:

Representa a un luchador.
Contiene los atributos privados nombre y edad, que representan el nombre del luchador y su edad.
Proporciona los métodos públicos obtenerNombre() y obtenerEdad() para obtener la información del luchador.
*/
