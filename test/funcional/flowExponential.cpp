#include "headers/flowExponential.hpp"

double FlowExponential::equation(){ 
    return  originSystem->getValue() * 0.01;
}

