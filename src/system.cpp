#include <iostream>
#include "headers/system.hpp"

System::System(string name, double value){
    this->name = name;
    this->value = value;
}

System::~System(){}

System::System(const System& cp){
    value = cp.value;
}

System& System::operator=(const System& cp){
    if(&cp == this)
        return *this;

    value = cp.value;
    return *this;
}

double System::getValue(){
    return value;
}
void System::setValue(double value){
    this->value = value;
}