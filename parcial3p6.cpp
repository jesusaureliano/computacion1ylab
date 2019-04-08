/*
 *  uso de const en clases
 */

#include <iostream>
#include <string>

// Otra forma de usar cout y string
using std::string;
using std::cout;

/*
 *  En la siguiente clase la definción de la 
 *  función show y el constructor se hace dentro
 *  de la misma declaración o cuerpo de class
 */
class dato{
public:
    // valor constante. SOLO PUEDE DEFINIRSE en el
    // constructor
    const string valor;
    // variable para ilustrar el error en show al
    // tratar de cambiar su valor
    int i;
    
    
    const string & show()const{
       cout << valor; 
       // quita el comentario de la instrucción para ver el
       //i++; // error! la función no debe modificar
            // al objeto
       return valor;
    }
    
    // inicialización de los dos atributos o variables
    // de la clase. Con la notación de : y () . Antes
    // del cuerpo del constructor {}
    dato(const string v):valor(v), i(0){}
    
};


int main(int argc, char** argv) {
    
    dato d("Ok");
    // aunque haya sido una referencia el valor
    // al que se va a asignar NO es constante
    // por lo que puede ser modificado...
    string v = d.show();  
    v = "good!";
    cout << v;
    
    return 0;
}
