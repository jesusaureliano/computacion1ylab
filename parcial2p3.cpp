/*
 * Estructuras
 */

/* 
 * File:   parcial2p3.cpp
 * Author: jesusesquivel
 *
 * Created on 19 de febrero de 2019, 12:48 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // struct es utilizada para construir un nuevo tipo. En el ejemplo siguiente
    // es -punto- que concentra variables con tipos de datos declarados previamente
    // o nativos(int,float,char,etc...)
    struct punto{
        float x;
        float y;
        // o puede ser
        // float x, y;
    }; 
    
    // Se declara pt del tipo punto
    punto pt;
    // Se accede a las variables x y 'y' de la estructura mediante el nombre
    // de la variable estructura, seguida de un punto, e inmediatamente el nombre de la 
    // de la variable elemento. En este caso x o y.
    pt.x = 2.17;
    pt.y = 1.11;
    
    cout << "pt.x : " << pt.x << endl;
    cout << "pt.y : " << pt.y << endl;
    
    // Otra forma de inicializar una variable tipo punto es en su definición.
    // A continuación declaramos una variable pt2 del tipo punto, y la inicializamos
    
    punto pt2 = {3,4};
    // imprimimos al punto
    cout << "pt2.x : " << pt2.x << endl;
    cout << "pt2.y : " << pt2.y << endl;
    
    // cambiamos los dos valores anteriores de la forma
    pt2 = {5,6};
    cout << "pt2.x : " << pt2.x << endl;
    cout << "pt2.y : " << pt2.y << endl;
    
    
    // A continuación hacemos una declaración de un arreglo de 10 puntos
    // a partir de una estructura anónima. NOTE que no hay nombre entre struct y
    // la llave {
    struct {
        int x,y;
    } pts[20];
    // a continuación le asignamos valores. Por ejemplo
    // (0,1),(1,2),(2,3),(3,4),...
    for(int i = 0; i < 10; i++){
       pts[i] = {i,i+1}; 
    }
    // podemos imprimirlo de la siguiente manera
    for(int i = 0; i < 20; i++){
       cout << "pts["<<i<<"]=("
            << pts[i].x<<","<<pts[i].y<<")"
            << endl; 
    }
    
    return 0;
}

