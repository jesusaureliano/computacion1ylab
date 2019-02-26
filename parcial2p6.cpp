/*
 * Variables static
 */

/* 
 * File:   parcial2p5.cpp
 * Author: jesusesquivel
 *
 * Created on 19 de febrero de 2019, 03:25 PM
 */

#include <iostream>

using namespace std;

void f();


/*
 * 
 */
int main(int argc, char** argv) {
    // Se llama dos veces para ver el efecto de
    // la declaración static en la función
    
    // Aquí imprime el 5. Se usa la declaración en
    // f() de la variable i
    f();
    
    // Aquí se imprime el 6. Ya NO SE USA LA DECLARACIÓN
    // y se mantiene el valor
    f();

    return 0;
}

void f(){
    // La siguiente declaración solo se usa la PRIMERA vez
    // que se llama a la función
    static int i = 5;
    // se usa su valor
    std::cout << i << endl;
    // y se modifica
    i++;
}

