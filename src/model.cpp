#include "headers/model.hpp"
#include "headers/flow.hpp"
#include <iostream>
#include <string>

Model::Model(){
}

Model::~Model(){}

void Model::run(int initialTime, int finalTime, int timeStep){
    for(int i = initialTime; i < finalTime; i += timeStep){

        for(int j = 0; j < vectorFlow.size(); j++){
            double value = vectorFlow[j]->equation();
            vectorFlow[j]->setValue(value);
        }

        for(int j = 0; j < vectorFlow.size(); j++){
            System* origin = vectorFlow[j]->getOriginSystem();
            origin->setValue(origin->getValue() - vectorFlow[j]->getValue());

            System* destiny = vectorFlow[j]->getDestinySystem();
            destiny->setValue(destiny->getValue() + vectorFlow[j]->getValue());
        }
    }
}

void Model::run(int finalTime){
    run(initialTime, finalTime, timeStep);
}

void Model::add(System* system){
    vectorSystem.push_back(system);
}
void Model::add(Flow* flow){
    vectorFlow.push_back(flow);
}

void Model::remove(System* system){
    for(int i = 0; i < vectorSystem.size(); i++){
        if(vectorSystem[i] == system){
            vectorSystem.erase(vectorSystem.begin() + i);
            break;
        }
    }
}
void Model::remove(Flow* flow){
    for(int i = 0; i < vectorFlow.size(); i++){
        if(vectorFlow[i] == flow){
            vectorFlow.erase(vectorFlow.begin() + i);
            break;
        }
    }
}

Model::Model(const Model& cp){
    System* sysAux;

    for(vector<System*>::const_iterator it = cp.vectorSystem.begin(); it != cp.vectorSystem.end(); it++){
        sysAux = (*it);
        this->add(sysAux);
    }

    Flow* flowAux;
    for(vector<Flow*>::const_iterator it = cp.vectorFlow.begin(); it != cp.vectorFlow.end(); it++){
        flowAux = (*it);
        this->add(flowAux);
    }

    initialTime = cp.initialTime;
    finalTime = cp.finalTime;
    timeStep = cp.timeStep;
}   


Model& Model::operator=(const Model& cp){
    if(&cp == this)
        return *this;

    vectorSystem.clear();
    vectorFlow.clear();

    System* sysAux;

    for(vector<System*>::const_iterator it = cp.vectorSystem.begin(); it != cp.vectorSystem.end(); it++){
        sysAux = (*it);
        add(sysAux);
    }

    Flow* flowAux;
    for(vector<Flow*>::const_iterator it = cp.vectorFlow.begin(); it != cp.vectorFlow.end(); it++){
        flowAux = (*it);
        add(flowAux);
    }
    
    initialTime = cp.initialTime;
    finalTime = cp.finalTime;
    timeStep = cp.timeStep;

    return *this;
}
