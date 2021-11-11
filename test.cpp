#include <iostream>
#include "calculator.h"
int main(){

    Calculator obj;
    Calculator obj1(3.5,5.5);
    obj.set(1.5,2.5);
    std::cout<<obj.add()<<"\n";
    std::cout<<obj1.div()<<"\n";
return 0;
}