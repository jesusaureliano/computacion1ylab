/*
 *  Clase abstracta
 */

#include <iostream>

using namespace std;

// clasr abstracta
class A{
    virtual int f() = 0;
};

class B : public A{
    virtual int f();
};

int B::f(){
    return 1;
}

int main(int argc, char** argv) {
    //A a;  // Error . A es una clase abstracta
    B b;
    
    return 0;
}
