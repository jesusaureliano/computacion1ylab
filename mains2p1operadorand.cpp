
#include <iostream>

using namespace std;

/*
 * Programa para ilustrar operaciones aritmeticas
 */
int main(int argc, char** argv) {

    // and  - && 
    int edad;
    cout << "---------------------------\n"
            "edad :";
    
    cin >> edad;
    
    if(edad > 0 && edad < 18){
        cout << "Menor de edad!";
    }
    
    if(edad >= 18 && edad < 65){
        cout << "Adulto activo";
    }
    
    if(edad >= 65){
        cout << "Tercera edad. Jubilado";
    }
    
    
    return 0;
}

