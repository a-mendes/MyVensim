#ifndef  MAIN_FUNCIONAL_TESTS
#define  MAIN_FUNCIONAL_TESTS

#include <iostream>
#include "headers/funcionalTests.hpp"
#include "../../src/headers/model.hpp"
#include "../../src/headers/system.hpp"
#include "../../src/headers/flow.hpp"

using namespace std;

int main(){

    exponentialFuncionalTest();

    cout << "Exponential Funcional Test passed!" << endl;

    logisticalFuncionalTest();

    cout << "Logistical Funcional Test passed!" << endl;

    complexFuncionalTest();

    cout << "Complex Funcional Test passed!" << endl;

    cout << "All tests passed!" << endl;

    return 0;
}

#endif