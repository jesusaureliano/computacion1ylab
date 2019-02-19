/*
 * Ámbito de visibilidad o validez de las variables
 */

/* 
 * File:   parcial2p5.cpp
 * Author: jesusesquivel
 *
 * Created on 19 de febrero de 2019, 03:25 PM
 */

#include <iostream>

using namespace std;

// antes de 'entrar' a main se pueden definir VARIABLES GLOBALES
// por ejemplo
int x = 3;

// cualquier función, incluyendo main, que se defina de aquí en adelante,
// en este archivo va a poder utilizar a esta variable global;

// NOTA IMPORTANTE: No es posible escribir instrucciones aquí (fuera de
// las funciones) La única posibilidad es la declaración de variables globales
// o variables es espacios de nombres

namespace miespacio{
    int x = 4;
}

/*
 * 
 */
int main(int argc, char** argv) {
    // imprime la variable global
    cout <<"global"<<endl;
    cout << x << endl;
    // imprime la variable dentro de -miespacio-
    cout << "en el espacio de nombres - miespacio (con :: ) :"<<endl;
    cout << miespacio::x << endl;
    
    // Al declarar una variable dentro de main se oculta
    // automáticamente la variable global
    cout << "local"<<endl;
    int x = 5;
    cout << x << endl;
    
    // para usar la variable global se usa el operador de
    // resolución de ámbito
    cout << "con el operador de resolución de ámbito ::" << endl;
    cout << ::x << endl;
    
    // Dentro de un entorno de llaves
    // NÓTESE que solo se abre y se cierra el siguiente
    // ámbito con unas simples llaves. No se pone nada antes o después de estas.
    {
        int x = 6;
        cout << "Dentro de un ambito anonimo : " << x << endl;
    }
    
    // pasado el ámbito anónimo
    cout << "pasado el ambito anónimo : " << x << endl;

    return 0;
}

