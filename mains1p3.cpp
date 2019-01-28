/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jesusesquivel
 *
 * Created on 28 de enero de 2019, 12:09
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float r1, r2;
    cout << "Programa para calcular la resistencia "
            "equivalente (serie y paralelo) de dos resistencias."<<endl;
    cout << "resistencia1 y resistencia2 (separadas por espacios)?";
    cin  >> r1 >> r2;
    cout << "serie : " << r1+r2 << ", y paralelo : " << 1/(1/r1+1/r2)<<endl;
    
    return 0;
}

