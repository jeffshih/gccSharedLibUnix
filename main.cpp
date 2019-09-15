#include <iostream>
#include "add2.h"
#include "add.h"

using namespace std;

int main(int argc, char** argv){

        double a = 1.3;
        double b = 2.6;
        double c,d,e;
        
        foo1 instance1;

        foo2 instance2;

        c = instance1.add(a,b);
        d = instance2.add(a,b);
        e = instance1.voo(2);
        std::cout << a << " + " << b << " = " << a+b << " and call addOne inside add = " << c << std::endl;
        std::cout << a << " + " << b << " = " << a+b << " and call addOne inside add2 = " << d  << std::endl;

        //instance1.printString("hello world");
        //instance2.printString("hello world");
        return 0;
    

}




