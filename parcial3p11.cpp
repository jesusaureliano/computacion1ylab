/*
 *  Funciones friend (amigas)
 *  sobrecarga de operadores << y +
 */

#include <iostream>
using namespace std;

class Punto{  
    
public: 
    // atributos o variables públicas
    int x, y;
    // constructor por default. Genera valores
    // aleatorios
    Punto(){
        x = rand() % 10;
        y = rand() % 10;
    }
    // constructor para definir valores
    Punto(int x, int y){
        this->x = x;
        this->y = y;
    }
    // función operador '+'  (*this)+(Punto)->(Punto)
    // Nótese que el argumento ( el único ) es en
    // realidad el segundo argumento al usarlo con el
    // objeto que lo llama (*this)
    Punto operator+(Punto);
    
    
    // para usarlo en cout (del tipo ostream) se utiliza
    // friend. 
    friend ostream & operator <<(ostream & os, const Punto & p);
};

// NOTESE QUE NO SE USA EL OPERADOR DE ÁMBITO ::
// porque la función es del tipo friend
ostream & operator <<(ostream& os, const Punto& p){
    os << "(" << p.x << ", " << p.y << ")" << endl;
    return os;
}

// Note que se usa el operador :: para redefinir
// el operador + para el uso de punto
Punto Punto::operator+(Punto p){
    return Punto(x + p.x, y + p.y);
}

int main(int argc, char** argv) {
    Punto pt1, pt2;
    // Sin la sobrecarga del operador <<
    // la siguiente instrucción marcaría un
    // error
    std::cout << pt1 << pt2 ;
    
    //... tampoco se hubiera podido haber hecho la suma
    // siguiente
    Punto pt3 = pt1 + pt2;
    std::cout << pt3;
    return 0;
}
