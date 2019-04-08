/*
 *  uso de this
 */

#include <iostream>

using namespace std;

/*
 * En la notación siguiente las funciones de
 * la clase regresan una referencia al objeto A
 * por lo que en el retorno se utiliza *this, i.e.,
 * "el objeto al que apunta 'este' apuntador"
 */

class A{
public:
    A & f(){
        cout << "A::f()" << endl;
        return *this;
    }
    
    A & g(){
        cout << "A::g()" << endl;
        return *this;
    }
};

/*
 * En la clase siguiente las funciones
 * regresan un apuntador por lo que se
 * debe usar la notación ->
 */
 
class B{
public:
    B * f(){
        cout << "B::f()" << endl;
        return this;
    }
    
    B * g(){
        cout << "B::g()" << endl;
        return this;
    }
};

int main(int argc, char** argv) {
    
    A a;
    a.f().g();
    
    // creas un nuevo objeto con new y lo 
    // dejas en el apuntador de objetos B, i.e.,b.
    B * b = new B();
    // cada vez que usas una función se regresa
    // a this, el apuntador al mismo objeto, por
    // eso solo se usan la notación de 'flechas'
    b->f()->g();
    
    // se elimina el objeto apuntado por b. Los
    // recursos se regresan al sistema
    delete b;
    
    // Una vez borrado por delete no puedes
    // usar al apuntador b
    return 0;
}
