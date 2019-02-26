/*
 * Referencia. Variables y argumentos de funciones
 */

/* 
 * File:   parcial2p5.cpp
 * Author: jesusesquivel
 *
 * Created on 19 de febrero de 2019, 03:25 PM
 */

#include <iostream>

// la siguiente función tiene un argumento REFERENCIA A ENTERO
// al que se le pasa un alias Y NO su valor
void f(int & a){
    a = 4;
}


/*
 * 
 */
int main(int argc, char** argv) {
    // Se declara una variable entera
    int x = 2;
    
    // Se declara una referencia
    int & rx = x;    // rx resulta ser un ALIAS de x
    
    // Se modifica 'indirectamente' el valor de x a través
    // de rx
    rx = 3;
    
    // imprimimos a x
    std::cout << "x : " << x << std::endl; // x = 3
    
    // Ahora veamos el pasar un valor por referencia
    // como argumento de una función
    
    // a x se le va a nombrar como a en la función y sus
    // modificaciones afectan a x, por ser a una referencia.
    f(x);
    
    // imprimimos nuevamente el valor de x
    std::cout << "despues de f(x)\nx : " << x << std::endl; // x = 4
    

    return 0;
}
