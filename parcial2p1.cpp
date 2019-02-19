/*
 * Arreglos unidimensional
 * 
 */

/* 
 * File:   parcial2p1.cpp
 * Author: Dr. Jesús Aureliano Esquivel Cárdenas
 *
 * Created on 19 de febrero de 2019, 12:10 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float calificaciones[3];
    
    cout << "Sin inicializar :" << endl;
    
    for(int i = 0; i < 3; i++){
        cout << "calificaciones[" << i << "]= " 
                << calificaciones[i]<<endl;
    }
    // Ahora inicializamos
    calificaciones[0] = 70;
    calificaciones[1] = 93;
    calificaciones[2] = 89;
    
    // Nuevamente imprimimimos
    
    cout << "Arreglo con valores :" << endl;
    
    for(int i = 0; i < 3; i++){
        cout << "calificaciones[" << i << "]= " 
                << calificaciones[i]<<endl;
    }
    
    /*
     Sumemos las tres calificaciones. Para ello podemos usar una variable
     * que podemos llamar -suma- (inicializada en cero)
     */
    float suma = 0;
    for(int i = 0; i < 3; i++){
        suma += calificaciones[i];
    }
    cout << "La suma de las calificaciones es " << suma << endl;
    cout << "y su promedio es " << suma/3 << endl;
    
    
    // Un arreglo que determina automáticamente su tamaño al inicializarlo
    int edades[] = {18,18,19,21,22,20,30};
    // son 7 valores, por lo tanto son siete elementos del arreglo edades
    //... ahora lo imprimimos
    for(int i = 0; i < 7; i++){
        cout << "edades[" << i << "]= " 
                << edades[i]<<endl;
    }
    
    // el arreglo NO TIENE más de 7 elementos, por lo que si accidentalmente
    // usas un índice fuera del rango, por ejemplo 10, el valor que obtendrás 
    // será aleatorio. Puede ser que el sistema te genere un error.
    cout << edades[10]<< endl;
    
    /*
     El siguiente código imprime las edades mayor a 20
     */
    for(int i = 0; i < 7; i++){
        if(edades[i]>20)
            cout << "edades[" << i << "]= " 
                << edades[i]<<endl;
    }
    
    
    return 0;
}

