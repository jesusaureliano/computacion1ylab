/*
 * Plantillas de funciones
 */

/* 
 * File:   parcial2p4.cpp
 * Author: jesusesquivel
 *
 * Created on 19 de febrero de 2019, 02:52 PM
 */

/*
 * El objetivo del programa es mostrar el uso de las plantillas para evitar usar
 * la definición de funciones con la misma forma o estructura
 */
#include <iostream>

using namespace std;

// prototipos de funciones que se definen al final del archivo. Después de main
// y que tienen la misma estructura lógica. 
int maximo1(int,int,int);
float maximo2(float,float,float);
char maximo3(char,char,char);

// A Continuación definimos un prototipo con plantilla. Esta opción evita
// TENER QUE ESCRIBIR LAS TRES FUNCIONES/PROTOTIPOS ANTERIORES
template< typename T>
T pmaximo(T,T,T);

int main(int argc, char** argv) {
    
    // con enteros...
    cout << maximo1(34, 22, -10) << endl;
    
    // con floats...
    cout << maximo2(1.2, 3.2, 4.9) << endl;
    
    // con chars
    cout << maximo3(3, 43, 55) << endl;
    
    // Ahora con la plantilla
    cout << "Con la plantilla ... " << endl;
    cout << pmaximo<int>(34, 22, -10) << endl;
    cout << pmaximo<float>(1.2, 3.2, 4.9) << endl;
    cout << pmaximo<char>(3, 43, 55) << endl;
    

    return 0;
}

/*
 Declaración de las funciones maximo
 */

int maximo1(int a, int b, int c){
    int m;
    
    if(a > b)
        m = a;
    else
        m = b;
    
    if(c>m)
        m = c;
    
    return m;
    
};

float maximo2(float a, float b, float c){
    float m;
    
    if(a > b)
        m = a;
    else
        m = b;
    
    if(c>m)
        m = c;
    
    return m;
    
};

char maximo3(char a, char b, char c){
    char m;
    
    if(a > b)
        m = a;
    else
        m = b;
    
    if(c>m)
        m = c;
    
    return m;
    
};
// La T es el tipo de variable que se usa: int, float o char
template< typename T>
T pmaximo(T a, T b, T c){  // usa el tipo T para las variables a, b y c
                            // y retorna un valor del tipo T                            
    T m;
    
    if(a > b)
        m = a;
    else
        m = b;
    
    if(c>m)
        m = c;
    
    return m;
};