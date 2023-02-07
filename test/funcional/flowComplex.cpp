#include "headers/flowComplex.hpp"

double FlowComplex::equation(){
    return originSystem->getValue() * 0.01;
}
