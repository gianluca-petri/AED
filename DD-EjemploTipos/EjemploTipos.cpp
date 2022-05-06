/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Gianluca Petri
 * Legajo: 1776990
 */

#include <iostream> // para input/output stream

#include <cassert>  /* llamo a biblio cassert para poder usa assert
                    assert asevera (chequea) si la sentencia dentro de los parentesis es verdadera.*/

int main() {    // Defino la clase principal del programa por donde C++ ingresa, siempre retorna un entero que se define como el estado de la ejecucion.

    const bool booleano = true;                          // Defino cte booleana con valor true
    const char caraSimple = 'z';                         // Defino cte caracter con valor z.
    const std::string palabra = "Esto es un string";     // Defino cte cadena de caracteres
    const int entero = -123;                             // Defino cte entera con valor -123.
    const unsigned enteroSinSigno = 654;                 // Defino cte entera sin signo con valor 654
    const double doblePres = 0.1414;                     // Defino cte double de punto flotante con doble precision
    


    assert(booleano);                                    // Asevero si cte booleana es verdadera.
    assert(caraSimple == 'z');                           // Asevero si cte caracter es z.
    assert(17 <= palabra.length());                      // Asevero si cte cadena de caracteres tiene 12 caracteres de largo.
    assert(entero != 123)                                // Asevero si cte entera es distinta de 123.
    assert(enteroSinSigno != 456);                       // Asevero si cte entera sin signo es distinta a 456
    assert(doblePres >= entero);                         // Asevero si cte de punto flotante con doble precision es mayor o igual a cte entera

    std::cout << "Todo funciona bien!\n";   // Si lo aseverado es correcto retorna 0 

}
