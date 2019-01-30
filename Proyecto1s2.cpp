/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Proyecto1s2.cpp
 * Author: jesusesquivel
 *
 * Created on 30 de enero de 2019, 10:11 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    int opcion;  // salir
    float res = 0, req = 0;
    do{
        cout << "\n\nMENU"<<endl;
        cout << "\t1. Resistencia:(" << res <<")\n"
            "\t2. Resistencia equivalente ("<<req <<")\n"
            "\t3. Serie\n"
            "\t4. Paralelo\n"
            "\t5. Salir\n"
            "--------------------------------\n\n";
        cin >> opcion;
        switch(opcion){
            case 1:
                cout << "resistencia: ";
                cin >> res;
                break;
            case 2:
                cout << "resistencia equivalente: ";
                cin >> req;
                break;
            case 3:
                req += res;
                break;
            case 4:
                if(req == 0 || res == 0){
                    req = 0;
                }else{
                    req = 1/(1/req + 1/res);
                }
                break;
            case 5:
                break;
            default:
                cout << "opción inválida!"<<endl;
        }
    }while(opcion!=5);
    
    cout << "Hasta luego..."<<endl;
  
    return 0;
}

