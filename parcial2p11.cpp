/*
 * Argumentos predefenidos
 */

#include <iostream>

using namespace std;

// En el prototipo se pueden poner valores por default
void f(int=1,int=1,int=1);

// Una vez declarando argumento con valor por defecto
// todos los argumentos a la derecha DEBEN TENER un valor
// por defecto. 
void f2(int,int=1);

//Lo siguiente marcaría un error.
// Lo siguiente generaría un error
void f3(int=1,int);



int main(int argc, char** argv) {
    
    cout << "Con los tres argumentos"<<endl;
    f(2,3,4);
    cout << "Con solo uno" << endl;
    f(2);
    cout << "Con dos"<<endl;
    f(2,3);
    cout << "Con ninguno"<<endl;
    f();
    
    return 0;
}

void f(int a, int b, int c){
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}

void f2(int a, int b){
    
}

void f3(int a, int b){
    
}

