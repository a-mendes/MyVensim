#include "headers/flow.hpp"
#include <iostream>

Flow::Flow(){}

Flow::~Flow(){}

Flow::Flow(string name){
    this->name = name;
}

Flow::Flow(const Flow& cp){
    name = cp.name;
    originSystem = cp.originSystem;
    destinySystem = cp.destinySystem;
}

Flow& Flow::operator=(const Flow& cp){
    if(&cp == this)
        return *this;

    name = cp.name;
    originSystem = cp.originSystem;
    destinySystem = cp.destinySystem;
    
    return *this;
}

void Flow::setOriginSystem(System* origin){
    this->originSystem = origin;
}

System* Flow::getOriginSystem(){
    return this->originSystem;
}

void Flow::setDestinySystem(System* destiny){
    this->destinySystem = destiny;
}

System* Flow::getDestinySystem(){
    return this->destinySystem;
}

string Flow::getName(){
    return this->name;
}

void Flow::setName(string name){
    this->name = name;
}
