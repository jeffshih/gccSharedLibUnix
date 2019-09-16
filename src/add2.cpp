#include "add2.h"
#include <iostream>





    double add2(double a, double b){
    
    std::cout << "calling add from add2" << std::endl;
    double c = a+b;
    return voo(c);
    
    }


    double voo(double a){

    std::cout << "calling addOne from add2" << std::endl;
    return a+2;
    }


