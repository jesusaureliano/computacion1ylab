
#include <iostream>
#include <cmath>
using namespace std;

/*
 * Programa para ilustrar operaciones aritmeticas
 */
int main(int argc, char** argv) {

    float af = 5, bf = 3;
    cout << "Numeros 5 y 3. Se usan como ..."<<endl;
    cout << "FLOATs"<<endl;
    cout << "--------------------------------"<<endl;
    cout << "suma : " << af + bf << endl;
    cout << "resta : " << af - bf << endl;
    cout << "multiplicacion : " << af*bf << endl;
    cout << "division : " << af/bf << endl;
     /*
      * la instrucción que sigue tiene comentario porque los numeros
      * de la instrucción o argumentos deben ser enteros. En este caso
      * son float. 
      */
    //cout << "modulo o residuo : " << af % bf;
     
    // Veamos ahora el caso para los números enteros
    int ai = 5, bi = 3;
    cout << endl;
    cout << "INTs"<<endl;
    cout << "------------------------------------" << endl;
    cout << "suma : " << ai + bi << endl;
    cout << "resta : " << ai - bi << endl;
    cout << "multiplicacion : " << ai*bi << endl;
    cout << "division : " << ai/bi << endl;
    cout << "modulo o residuo : " << ai % bi;
    
    
    return 0;
}

