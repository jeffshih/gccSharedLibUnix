#include "add.h" 
#include <iostream>
using namespace std;






double add(double a, double b){
    double c = a+b;
    cout << "calling add from add.h" << endl;
    return voo(c);
}


double voo(double a){

    cout << "calling addOne from add.h" << endl;
    return a+1;
}


