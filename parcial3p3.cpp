/*
 * static en clases
 */

#include <iostream>


class PUNTO{   
public:
    static int numeroDePuntos;
    PUNTO(){
        numeroDePuntos++;
    }
};

// Así se inicializa una variable static
int PUNTO::numeroDePuntos = 0;

int main(int argc, char** argv) {
    
    // cada vez que se crea un objeto de esa clase con
    // el constructor por default se incrementa el valor
    // de la variable numeroDePuntos, el cual es común a
    // TODOS los objetos!
    PUNTO pt1,pt2,pt3;
    
    std::cout << PUNTO::numeroDePuntos << std::endl;
    
    return 0;
}
