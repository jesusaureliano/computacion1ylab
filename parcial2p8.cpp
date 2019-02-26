/*
 * Modificadores: const, unsigned, long
 */

#include <iostream>
#include <climits>

int main(int argc, char** argv) {
    // const
    
    // Una variable const recibe su valor en su
    // declaración
    
    const int p = 100;
    
    // cualquier intento de asignación posterior marca
    // un error.
    
    // Al quitar el sig comentario observarás un error
    // por querer modificar una variable constante. 
    
    // p = 5;
    
    // unsigned
    
    // A continuación la variable i se declara como entera
    // sin signo. Se intenta guardar un número negativo, pero
    // como no se guarda el signo el número es interpretado como
    // uno positivo.
    unsigned int i = -343;
    std::cout << i << std::endl;
    
    // Si guardamos uno positivo no hay ningún problema
    i = 123456;
    std::cout << i << std::endl;
    
    // Pero... hasta que valor positivo podemos guardar. Esto
    // lo indagamos con la siguiente función (usar el archivo de cabecera
    // climits. 
    // A continuación imprimimos el límite de unsigned long
    std::cout << "unsigned int (max)" <<  UINT_MAX << std::endl;
    
    // En el caso de mi máquina el número fue 4294967295
    // Al querer asignar un número mayor pasa lo siguiente
    i = 4294967296;  // un 1 mas grande ;)
    std::cout << i << std::endl; // imprime un cero
    
    i = 4294967297;  // 2 por encima del máximo
    std::cout << i << std::endl; // 1
    
    i = 4294967298;  // 3 por encima del máximo
    std::cout << i << std::endl; // 2  .  Etc...
    
    // Para ver algunos límites...
    // Los macros en Mayúsculas están definidos en climits
    std::cout << "\nAlgunos limites:\n"<<std::endl;
    std::cout << "int (min) : " << INT_MIN << std::endl;
    std::cout << "int (max) : " << INT_MAX << std::endl;
    std::cout << "long int (min) : " << LONG_MIN << std::endl;
    std::cout << "long int (max) : " << LONG_MAX << std::endl;
    
    std::cout << "long long int (min) : " << LLONG_MIN << std::endl;
    std::cout << "long long int (max) : " << LLONG_MAX << std::endl;
    
    std::cout << "unsigned long long int (max) : " << ULLONG_MAX << std::endl;
    
    // Para checar todos los límites puedes averiguarlo en la referencia de C++
    // que se encuentra en la página de internet
    // http://www.cplusplus.com/reference/climits/
   
    return 0;
}
