/*
 * apuntador a estructuras y arreglos
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int a1[] = {3,5,7,9};
    // El nombre del arreglo guarda la dirección
    // del primer elemento, i.e.,(esto es) a1[0]
    int * p = a1;
    cout << "direccion en p " << p 
            << " y valor al que apunta " 
            << *p << endl; // imprime el 3
    // incrementamos p
    p++;
    // esto incrementa la dirección al siguiente entero
    // ya que es el tipo de dato al que apunta. NOTE los
    // valores de las direcciones...
    cout << "direccion en p " << p 
            << " y valor al que apunta " 
            << *p << endl; // imprime el 3
    
    // Los apuntadores a estructuras se manejan algo
    // diferentes
    struct PUNTO {int x, y, z;};
    PUNTO pts[]= {{0,0,0},{-1,0,1},{2,3,4}};
    // A continuación imprimimos los valores sin apuntadores
    for(int i = 0; i < 3; i++){
        cout << pts[i].x  << ", "
                << pts[i].y << ", "<< pts[i].z<<endl;
    }
    
    cout << "y con apuntadores"<<endl;
    PUNTO * pp = pts;
    for(int i = 0; i < 3; i++){
        cout << "Direccion " << i << " en pp " << pp << endl;
        cout << pp->x  << ", "
                << pp->y << ", "<< pp->z <<endl;
        pp++;
    }
    
    // Nótese que la diferencia en las direcciones es de 12
    // porque cada elemento del arreglo consta de una estructura
    // de tres enteros ( 3 x 4 bytes = 12 bytes)
    
    return 0;
}
