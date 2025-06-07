#include "Bankcalculations.h"
#include <iostream>
#include <string>


// Let's get to some work
int main(){
    Bank mybank;
    mybank.set_Bank(23, 9, 2);
    std::cout<<mybank.FD_amount()<<std::endl;
    return 0;
}