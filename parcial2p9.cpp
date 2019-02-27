/*
 * typedef
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //En ocasiones es importante tener
    //un tipo de variables con nombres que signifiquen algo
    
    // Por ejemplo,
    typedef float temperatura;
    
    // y aquí se definen dos variables del tipo temperatura (esto es, float)
    temperatura t1, t2;
    t1 = 3;
    t2 = 10;
    
    // Definimos una estructura
    struct DatosPersonales{
        string nombre;
        string apellido;
        unsigned int edad;
    };
    
    // Declaramos una variable con la estructura anterior
    DatosPersonales dpAlumno;
    // ... y le asignamos valores. Notación del 'punto'
    dpAlumno.nombre = "Juan";
    dpAlumno.apellido="Perez";
    dpAlumno.edad=21;
    
    // La variable (estructura) DatosPersonales se 
    // utiliza con typedef para darle 'otro nombre'
    
    typedef DatosPersonales DP; // nombre del tipo más breve ;)
    
    DP dpProfesor = {"Jesus","Esquivel",51};
    
    // De hecho, podemos definir nuevos tipos con typedef
    // y estructuras anónomas. 
    // A continuación definimos una tipo de estructura alumno
    
    typedef /*aquí se omite el nombre - por eso es anónima */
        struct { string nombre; 
          unsigned long int matricula; 
        }  ALUMNO;
    
    ALUMNO a1 = {"Ricardo", 1232332};
    
    // En lugar de usar una estructura en ocasiones se utiliza
    // el mismo nombre del tipo que se desea definir + un guión bajo
    
    typedef 
     struct _PROFESOR{string nombre; unsigned long int expediente;} PROFESOR;
                   
     PROFESOR p1;
     p1 = {"raul", 000000};    
    
    return 0;
}
