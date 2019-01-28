
#include <iostream>
#include <cmath>
using namespace std;

/*
 * Programa para ilustrar los comentarios. 
 * Se obtendrá el área de un cilindro.
 */
int main(int argc, char** argv) {

    float radio; // radio de la base del cilindro
    float area; // para guardar el área de la base
    float altura; // altura del cilindro
    float volumen; // para guardar el volumen del cilindro
    
    // -const- el número pi se declara como entero constante. En su declaracion
    // debe ser inicializado
    const float pi = /*...dentro de la instrucción*/ 3.141592;
    
    // Introducir los parámetros
    cout << "Introducir radio y altura del cilindro: ";
    cin >> radio >> altura;
    
    /*
     Primero sacamos el área de la base
     */
    area = pi*pow(radio,2); // pow (x,y) eleva x a la potencia y, esto es x^y.
    volumen = area*altura;
    cout << "area de la base : " << area << endl;
    cout << "volumen del cilindro : " << volumen << endl;
     
    
    return 0;
}

