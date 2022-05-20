/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Gianluca Petri
 * Legajo: 1776990
 */
#include <string>
using namespace std::string_literals; // enables s-suffix for std::string literals

#include <cassert>  /* llamo a biblio cassert para poder usa assert
                    assert asevera (chequea) si la sentencia dentro de los parentesis es verdadera.*/

int main() {    // Defino la clase principal del programa por donde C++ ingresa, siempre retorna un entero que se define como el estado de la ejecucion.
    
    // booleano
    assert(true);                  
    assert(false != true);
    assert(true | false);

    // enteros
    assert(42 == 24 + 18);
    assert(42 != 4 + 18);
    assert(sizeof 65 == 4);

    //naturales (unsigned)
    assert(40u != 25u);
    assert(2 == 2u);

    // punto flotante
    assert(1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    assert(2.0/2 == 1.0);
    assert(48 == 48.00);
    assert(4E1 == 4e1);
    assert(4e1 == 4.0*10);
    assert(72e6 == 72'000'000);

    // caracteres
    assert('a' + 1 == 'b');
    assert('s' - 'A' == '2');
    assert('C' - 2 == 65 | 'C' - 2 == 'A');
    assert(sizeof 'z' == 1);

    //string
    assert("abc defg"s.length() == 8);
    assert("1234"s == "12"s + "34"s);
    //assert(sizeof "Hello"s == 16); este falla, en cada compu es distinto
}