/*
 * Arreglos de objetos y formas de direccionamiento
 * con apuntadores
 */

#include <iostream>

class PUNTO{
    float x, y;
public:
    PUNTO(){
        x = rand()%100;
        y = rand()%100;
    }
    void print();
};

void PUNTO::print(){
    std::cout << x << " , " << y << std::endl;
}

int main(int argc, char** argv) {
    
    // creamos 20 puntos. Con el constructor por
    // default que crea valores aleatorios entre
    // 0 y 99
    PUNTO puntos[20];
    
    // y los imprimimos
    for(int i = 0; i < 20; i++){
        puntos[i].print();
    }
    
    // podemos acceder a los puntos con un apuntador
    // por ejemplo,
    PUNTO * p = puntos; // el nómbre del arreglo
                        // es la dirección del primer
                        // objeto
    // volvemos a imprimir
    std::cout << "--------------------------" << std::endl;
    for(int i = 0; i < 20; i++){
        p->print();
        // incrementamos el valor de p para apuntar al
        // siguente PUNTO
        p++;
    }
    // otra forma de usarlo con APUNTADORES
    p = puntos;
    std::cout << "++++++++++++++++++++++++++" << std::endl;
    for(int i = 0; i < 20; i++){
        (p+i)->print();
    }
    // otra forma de usarlo con casting a PUNTO
    p = puntos;
    std::cout << "***************************" << std::endl;
    for(int i = 0; i < 20; i++){
        ((PUNTO)*(p+i)).print();
    }

    return 0;
}
