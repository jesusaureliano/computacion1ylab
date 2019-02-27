/*
 * new y delete
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    // cuando tienes un espacio por una declaración
    int x = 3;
    // puedes fácilmente asignarle la dirección a
    // un apuntador.
    int * p = &x;
    cout << "Dirección de x : " << p << endl;
    
    // esto implica haber declarado x antes. 
    // Para abrir o asignar espacio de memoria
    // sin necesidad de llamarle por un nombre, e.g., x
    // podemos utilizar new.
    // A continuación se abre un espacio en algún lado
    // de la memoria para guardar un int. Su dirección
    // se asigna automáticamente a p;
    p = new int;
    cout << "Dirección asignada por new : " << p << endl;
    // Ahí podemos guardar un número
    *p = 3;
    
    // Sin embargo, cuando se deja de usar ese espacio de 
    // memoria DEBEMOS regresarlo al sistema mediante la
    // operación delete
    delete p;
    
    // Puede ser que la memoria siga manteniendo el valor
    // de la dirección. PERO YA NO ESTÁ A NUESTRA DISPOSICIÓN
    // pertenece ahora al sistema
    cout << "Dirección después de delete : " << p << endl;   
    
    
    // A continuación definimos una estructura denominada _VERTICE
    // y... a través de typedef definimos los nuevos tipos
    // VERTICE y el apuntador a la estructura _VERTICE denominado
    // PVERTICE
    typedef struct _VERTICE{
        int x, y, z;            //coordenadas
        int cx, cy, cz;         // colores
        _VERTICE(){
            x=y=z=cx=cy=cz=0;
        }
    } VERTICE, *PVERTICE;
    
    // creamos una nueva estructura
    VERTICE v;
    // y su dirección se la asignamos a un apuntador pV
    PVERTICE pV = &v;
    // así podemos cambiar cualquiera de sus elementos
    pV->cx = 0;
    
    // mediante new podemos crear otra estructura ANÓNIMA
    pV = new VERTICE;
    // y la usamos
    // e.g.,
    pV->y = 3;
    
    // cuando ya no la necesitamos podemos BORRARLA mediante
    delete pV;
    
    
    // un arreglo de enteros
    // e.g., 
    int * ai = new int[10];
    
    
    // Para acceder a un elemento lo puedes hacer de la
    // siguiente manera
    ai[5] = 6; // el elemento z del cuarto vértice
    
    // también se pudo haber seleccionado como
    *(ai+5) = 6;
   
    // y para borrar el arreglo
    delete [] ai;
     
    return 0;
}
