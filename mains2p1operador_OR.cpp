
#include <iostream>

using namespace std;

/*
 * Programa para ilustrar operaciones aritmeticas
 */
int main(int argc, char** argv) {

    // and  - || 
    int edad;
    cout << "---------------------------\n"
            "edad :";
    
    cin >> edad;
    
    if(edad < 0 || edad > 120){
        cout << "Edad imposible. Los siento, el programa termina!";
        return 0;        
    }else{
        cout << "Edad dentro del rango..."<<endl;
    }
    
    string familiar;
    cout << "-------------------------------\n"
            "familiar (esposo/esposa/hija)?";
    cin >> familiar;
    
    if(familiar=="esposo" || familiar=="esposa"){
        cout << "acceso todos los autos"<<endl;
    }else{
        if(familiar=="hija"){
            cout << "acceso solo a un auto"<<endl;
        }else{
            cout << "familiar sin acceso a ningun auto"<<endl;
        }
    }
    
    
       
    return 0;
}

