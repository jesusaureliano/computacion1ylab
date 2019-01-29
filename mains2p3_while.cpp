
#include <iostream>

using namespace std;

/*
 * Programa para ilustrar operaciones aritmeticas
 */
int main(int argc, char** argv) {

    float t = 0, dt=0.12121;
    while(t <= 10){
        cout << t << endl;
        t += dt; // t = t + dt;      
    }
    
       
    return 0;
}

