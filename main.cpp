#include <iostream>
#include "add2.h"
#include "add.h"

using namespace std;

int main(int argc, char** argv){

        double a = 1.3;
        double b = 2.6;
        double c,d,e;
        


        c = add(a,b);
        d = add2(a,b);
        std::cout << a << " + " << b << " = " << a+b << " and call addOne inside add = " << c << std::endl;
        std::cout << a << " + " << b << " = " << a+b << " and call addOne inside add2 = " << d  << std::endl;

        return 0;
    

}




