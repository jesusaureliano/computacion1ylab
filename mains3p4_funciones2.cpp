#include <iostream>     // std::cout, std::hex, std::endl

//Prototipo
double suma (double, double);

int main () {
  
    std::cout << suma(2,3);
    
  return 0;
}

//Definición de la función
double suma(double a, double b){
    return a + b;
}