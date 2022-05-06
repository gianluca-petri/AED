/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Gianluca Petri
 * Legajo: 1776990
 */

#include <cassert>  /* llamo a biblio cassert para poder usa assert
                    assert asevera (chequea) si la sentencia dentro de los parentesis es verdadera.*/

int main() {    // Defino la clase principal del programa por donde C++ ingresa, siempre retorna un entero que se define como el estado de la ejecucion.
  
    assert(true);                                             // Asevero si cte booleana es verdadera.
    assert(42 == 24 + 18);
    assert(false != true);
    assert(true | false);
    assert(1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    assert(2.0/2 == 1);
    assert(48 == 48.00);
    assert('a' + 1 == 'b');
}
