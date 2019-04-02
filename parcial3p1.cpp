/*
 * new y delete
 */

#include <iostream>

using namespace std;

class A{
    int a;
public:
    int b;
    float f1();
    A(int i);
    A();
protected:
    int c;
    bool f2();
private:
    int d;
};

A::A(){
    a = b = c = rand() % 10;
}

A::A(int i){
    a = b = c = i;
}

int main(int argc, char** argv) {
    
    A a1; // se llama al constructor por default A::A()
    A a2(3); // se usa el constructor que sí escribimos explícitamente
    
    // coloca un comentario al principio para quitar el siguiente
    // error!
    a1.a = 3; // error! se trata de acceder a un miembro privado
    a2.b = 4; // Ok! El miembro es público
    
    // mientra no uses las funciones de la clase A este código no tiene
    // ningún error ( suponiendo ya comentaste // A.a = 3; )
    
    // pero... si pones la siguiente instrucción sucedería lo siguiente:
    // el compilador no marca ningún error, pero el complador sí lo haría
    float x = a1.f1();
        
    return 0;
}
