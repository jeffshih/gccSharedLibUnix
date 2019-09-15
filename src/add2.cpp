#include "add2.h"
#include <iostream>





    foo2 foo2::getInstance2(){
        foo2 foo;
        return foo;
    }
    
    double foo2::add(double a, double b){
    
    std::cout << "calling add from add2" << std::endl;
    double c = a+b;
    return voo(c);
    
    }


    double foo2::voo(double a){

    std::cout << "calling addOne from add2" << std::endl;
    return a+2;
    }


    void foo2::printString(string s){

    std::cout << s << " append somthing from add 2" << std::endl;
    }

