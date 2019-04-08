/*
 *  try - catch - catch con cadenas y objetos
 */

#include <iostream>

using namespace std;

// se definen dos variables globales
float x, y;

// una clase que guarda el mensaje y el método
// para desplegarlo
class ErrorArgumentos{
public:
    char * m;
    void show();
};

// definición de show
void ErrorArgumentos::show(){
    cout << m << endl;      // en test
    cout << "--------------" << endl;
}

// prototipo de la función test
void test();

int main(int argc, char** argv) {
    // para salir teclea Esc y enter
    while (cin >> x >> y) {
        // try... si todo bien, se salta a catch
        try { 
            test();
        } catch (const char * s) {  // catch..a la cadena enviada por throw
            cout << s << endl;  
            // ... y otro catch, pero ahora con objeto del tipo 
            // ErrorArgumentos
        } catch (ErrorArgumentos ea){
            // imprime el tipo de error
            ea.show();
            continue;
        }                       
        
        // si todo está bien hace la división
        cout << x / y << endl;
        cout << "--------------" << endl;
    }

    return 0;
}

// definición de la función test
void test() {
    ErrorArgumentos ea;
    // dos casos a vigilar...
    // División entre cero... de serlo 'arrojar' la excepción
    if (x != 0 && y == 0) {
        ea.m = "División entre cero!";
        throw ea;
    }
    // o en caso de una división indefinida
    if (x == 0 && y == 0) {
        ea.m = "Divisón indefinida!";
        throw ea;
    }
    // Esto normalmente no se haría
    throw "Ningún error";
}
