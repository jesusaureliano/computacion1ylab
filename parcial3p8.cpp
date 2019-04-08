/*
 *  uso de class enum
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    enum Egg{Small, Medium, Large, Jumbo};
    /*
     * debe ponerse class después de enum
     * para poder utilizar las mismas variables
     * que Egg
     */
    enum class TShirt{Small, Medium, Large, Jumbo};
    
    Egg h = Small; // Small es del tipo Egg
    
    //TShirt ts = Small; // Error. Small es del tipo Egg
    TShirt ts2 = TShirt::Small; //Ok
    
    return 0;
}
