#include "headers/flowLogistic.hpp"

double FlowLogistic::equation(){
    return destinySystem->getValue() * 0.01 * (1 - destinySystem->getValue() / 70);
}
