/*
 * static y un uso del destructor de clases
 */

#include <iostream>


class PUNTO{ 
    int id; // identificador del punto
public:
    static int numeroDePuntos;
    
    PUNTO(){
        numeroDePuntos++; 
        id = numeroDePuntos;
        std::cout << "CONSTRUCTOR punto " << id << " : numeroDePuntos:" 
            << PUNTO::numeroDePuntos << std::endl;
    }
    ~PUNTO(){
        numeroDePuntos--;
        std::cout << "DESTRUCTOR  punto " << id << " : numeroDePuntos:" 
            << PUNTO::numeroDePuntos << std::endl;
    }
};

// Inicializamos la variable static
int PUNTO::numeroDePuntos = 0;

int main(int argc, char** argv) {
    
    

    // cada vez que se crea un objeto de esa clase con
    // el constructor por default se incrementa el valor
    // de la variable numeroDePuntos, el cual es común a
    // TODOS los objetos!
    PUNTO pt1;
    // a continuación empezamos un ámbito anónimo. Solo
    // para crear variabes locales
    {
        PUNTO pt2;
        // y otro más anidado
        // observa las impresiones del contructor
        {
            PUNTO pt3;
            // observa la impresión del destructor de pt3 en este punto
        }
    }
    
    // uno punto más en el mismo ámbito de pt1;
    PUNTO pt4;
    
    // Observe la secuencia de las construcciones y destrucciones de
    // objetos de acuerdo al ámbito.
    // El primer objeto en crearse es el último en destruirse 
    // (entre pt1 y pt4)
    return 0;
}
