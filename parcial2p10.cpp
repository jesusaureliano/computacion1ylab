/*
 * Apuntadores
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int x = 5;
    int y = 7;
    
    // a continuación sacamos la dirección de x
    cout << &x << endl;
    cout << &y << endl;
    
    /*
     *  En mi máquina obtuve
     * 
     *  0x7ffee6802a0c
     *  0x7ffee6802a08   
     */
    
    // Las direcciones las podemos guardar en los siguientes apuntadores
    int * px = &x;
    int * py = &y;
    
    // ahora, sacamos la dirección de ambos nuevamente
    cout << "Los valores de los apuntadores:"<<endl;
    cout << px << endl;
    cout << py << endl;
    
    // Los datos, mediante los apuntadores se direccionan
    // con el asterisco
    cout << "Con los apuntadores:"<<endl;
    cout << *px << endl;
    cout << *py << endl;
    
    // modificamos los datos con los apuntadores
    *px = *px * 4;  // segundo * es una multiplicacion
    *py = (*py)+1;  // se incrementa lo que se está apuntando por py
    
    cout << "Modificado con los apuntadores:"<<endl;
    cout << *px << endl;
    cout << *py << endl;
    
    // Apuntador a estructura
    struct PUNTO {int x; int y;};
    PUNTO pt = {1,2};
    PUNTO * ptr = &pt;
    cout << "Estructura :"<<endl;
    cout << pt.x << endl;
    cout << pt.y << endl;
    
    cout << "Estructura (Con apuntadores):"<<endl;
    cout << ptr->x << endl;
    cout << ptr->y << endl;
    
    ptr->x = 3;
    ptr->y = 4;
    
    cout << "Estructura modificada:"<<endl;
    cout << pt.x << endl;
    cout << pt.y << endl;
    
    
    return 0;
}
