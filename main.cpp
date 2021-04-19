#include <iostream>
#include "WheelsController.hpp"

double pe = 1;
int main(){
    std::cout << pe;
WheelsController a(MODEL::OMNI4_CORNER,&pe,&pe,&pe);

    std::cout << pe;
}