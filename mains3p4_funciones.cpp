/*
 * El objetivo del programa es que observer que al ejecutar solamente
 * COMPILAR el archivo
 * no hay error. Pero si quieres construir (BUILD) . Lo cual ejecuta
 * el enlazador (LINKER). Este no encuentra el archivo y aquí si marcaría 
 * un error.
 */



#include <iostream>     // std::cout, std::hex, std::endl

double suma (double, double);

int main () {
  
    std::cout << suma(2,3);
    
  return 0;
}