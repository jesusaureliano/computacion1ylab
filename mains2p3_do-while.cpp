
#include <iostream>

using namespace std;

/*
 * Programa para ilustrar operaciones aritmeticas
 */
int main(int argc, char** argv) {

    float t = 0, dt=0.12121;
    int i = 0;
    do{
        i++; // i = i + 1
        
        cout << "i : " << i << ", t : " << t << endl;
        
        t += dt; // t = t + dt;      
    }while(t < 10);
    
    cout << i << " renglones!"<< endl;
       
    return 0;
}

