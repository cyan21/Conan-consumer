#include <iostream>
#include "hello.h"
#include "greet.h"

void greet(){
    hello();
    #ifdef NDEBUG
    std::cout << "Greetings World Release!" <<std::endl;
    #else
    std::cout << "Greetings World Debug!" <<std::endl;
    #endif
}
