+------------------------+
|       Luchador         |
+------------------------+
| - nombre: string       |
| - edad: int            |
+------------------------+
| + obtenerNombre(): string |
| + obtenerEdad(): int    |
+------------------------+

+------------------------+
|      Campeonato        |
+------------------------+
| - nombre: string       |
| - categoria: string    |
+------------------------+
| + obtenerNombre(): string |
| + obtenerCategoria(): string |
+------------------------+

+------------------------+
|        Evento          |
+------------------------+
| - nombre: string       |
| - fecha: string        |
+------------------------+
| + obtenerNombre(): string |
| + obtenerFecha(): string |
+------------------------+

+------------------------+
|         Arena          |
+------------------------+
| - nombre: string       |
| - ubicacion: string    |
+------------------------+
| + obtenerNombre(): string |
| + obtenerUbicacion(): string |
+------------------------+

/*
Clase Luchador: Representa a un luchador de la WWE.

Atributos:
nombre: string
edad: int
Métodos:
obtenerNombre(): string
obtenerEdad(): int
--------------------------------------------------------------
Clase Campeonato: Representa un campeonato de la WWE.

Atributos:
nombre: string
categoria: string
Métodos:
obtenerNombre(): string
obtenerCategoria(): string
--------------------------------------------------------------------
Clase Evento: Representa un evento de lucha libre de la WWE.

Atributos:
nombre: string
fecha: string
Métodos:
obtenerNombre(): string
obtenerFecha(): string
------------------------------------------------------------------------------------
Clase Arena: Representa una arena donde se llevan a cabo los eventos de la WWE.

Atributos:
nombre: string
ubicacion: string
Métodos:
obtenerNombre(): string
obtenerUbicacion(): string
*/

/*
- La clase "Campeonato" y la clase "Evento" tienen una asociación con la clase "Luchador"
porque en un campeonato o evento participan varios luchadores.
- La clase "Evento" y la clase "Arena" tienen una asociación, 
ya que un evento de lucha libre se lleva a cabo en una arena específica.
*/