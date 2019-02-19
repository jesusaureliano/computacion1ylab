/*
 * Arreglos bidimensionales
 * 
 */

/* 
 * File:   parcial2p2.cpp
 * Author: Dr. Jesús Aureliano Esquivel Cárdenas
 *
 * Created on 19 de febrero de 2019, 12:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    /*
     A continuación guardamos tres calificaciones de dos alumnos. El primer
     * índice es el de alumnos y el segundo es de la materia.
     * Podemos codificar 
     *  Pedro - 0
     *  Juan  - 1
     * 
     * y materias
     *  Matemáticas - 0
     *  Física - 1
     *  Química - 2
     */
    
    //declaración
    float calificaciones[2][3];
    //inicialización
    calificaciones[0][0] = 87; //  Pedro, Matemáticas = 87
    calificaciones[0][1] = 67; //  Pedro, Física = 67
    calificaciones[0][2] = 89; //  Pedro, Química = 89
    
    calificaciones[1][0] = 80; //  Juan, Matemáticas = 80
    calificaciones[1][1] = 76; //  Juan, Física = 76
    calificaciones[1][2] = 78; //  Juan, Química = 78
    
    // imprimimos todas las calificaciones. La siguiente forma no
    // es muy descriptiva...
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << calificaciones[i][j]<<endl;
        }
    }
    // imprimamos con más información para el usuario
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << "calificaciones["<<i<<"]["<<j<<"] =" <<
                    calificaciones[i][j]<<endl;
        }
    }
    
    // La forma anterior aún no es muy descriptiva. A continuación podemos
    // guardar los nombres de los alumnos y las materias en otros arreglos para
    // imprimir las calificaciones al usuario con toda la información disponible
    // (el nombre del alumno y la calificación)
    
    string alumnos[]={"Pedro","Juan"};
    // Por lo pronto no ponemos el acento a las cadenas...
    string materias[]={"Matematicas","Fisica","Quimica"};
    // Ahora sí, a imprimir la información más completa posible
    
    for(int i = 0; i < 2; i++){
        cout << "Alumno : " << alumnos[i] << endl;
        for(int j = 0; j < 3; j++){
            cout << "\t" << materias[j] << " : " <<
                    calificaciones[i][j]<< endl;
        }
    }
    
    
    return 0;
}

