#include<iostream>
#include "foo.h"
#include "util/bar.h"

using namespace std;

void foo(){
    std::cout<< " foo " << endl;
}

void foo2(){
    std::cout << " foo2  " << endl;
    bar();
}
