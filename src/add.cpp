#include "add.h" 
#include <iostream>
using namespace std;





foo1 foo1::getInstance(){
    foo1 foo;
    return foo;
}

double foo1::add(double a, double b){
    double c = a+b;
    cout << "calling add from add.h" << endl;
    return voo(c);
}


double foo1::voo(double a){

    cout << "calling addOne from add.h" << endl;
    return a+1;
}

void foo1::printString(string s){
    
    std::cout << s << " append somthing from add 2" << std::endl;
}

