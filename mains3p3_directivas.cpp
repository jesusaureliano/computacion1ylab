#include <iostream>     // std::cout, std::hex, std::endl

//#define MECANICO   //ejecuta el programa con/sin comentario

int main () {
  
#ifdef MECANICO
    float k = 2.821;
#else
    float k = 3.443;
#endif
    
    std::cout << "k : " << k << std::endl;
    
  return 0;
}