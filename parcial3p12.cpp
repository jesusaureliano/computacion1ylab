/*
 *  try - catch con cadenas
 */

#include <iostream>

using namespace std;

// se definen dos variables globales
float x, y;

// prototipo de la función test
void test();

int main(int argc, char** argv) {
    // para salir teclea Esc y enter
    while (cin >> x >> y) {
        // try... si todo bien, se salta a catch
        try { 
            test();
        } catch (const char * s) {  // catch..a la cadena enviada por throw
            cout << s << endl;      // en test
            cout << "--------------" << endl;
            continue;               // se brinca el resto de las instrucciones
        }                           // de while para intentarlo de nuevo
        
        // si todo está bien hace la división
        cout << x / y << endl;
        cout << "--------------" << endl;
    }

    return 0;
}

// definición de la función test
void test() {
    // dos casos a vigilar...
    // División entre cero... de serlo 'arrojar' la excepción
    if (x != 0 && y == 0) {
        throw "División entre cero!";
    }
    // o en caso de una división indefinida
    if (x == 0 && y == 0) {
        throw "División indefinida!";
    }
}
