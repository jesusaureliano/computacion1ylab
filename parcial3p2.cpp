/*
 * herencia y acceso a datos heredados
 */

#include <iostream>


class A{
protected:
    int a;
public:
    int b;
private:
    int c;
};

// B hereda las características de A.
// B es child de A
// o... A es parent de B
class B: public A{
public:
    void print();
    B();
};

B::B(){
    a = b = 0;  // B tiene acceso a los datos protected y public de A  
}

void B::print(){
    // Esta función usa una variable PROTECTED de la
    // clase padre (i.e.,A). Cámbiala por la variable
    // privada (i.e.,c) para que observes el error y como
    // se despliega el mensaje
    std::cout << "valor de a : " << a << std::endl;
}

int main(int argc, char** argv) {
    
    B b;
    b.print();
        
    return 0;
}
