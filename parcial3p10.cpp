/*
 *  Polimorfismo
 */

#include <iostream>

// clasr abstracta
class Shape{
public:
    virtual void graficar() = 0;
};

class Triangle : public Shape{
public:
    virtual void graficar();
};

void Triangle::graficar(){
    std::cout << "graficando triangulo!" << std::endl;
}

class Square : public Shape{
public:
    virtual void graficar();
};

void Square::graficar(){
    std::cout << "graficando cuadro!" << std::endl;
}


int main(int argc, char** argv) {
    
    Shape * ps[]= {new Triangle, new Triangle, new Square};
    for(int i = 0; i < 3; i++){
        ps[i]->graficar();
    }
    
    return 0;
}
