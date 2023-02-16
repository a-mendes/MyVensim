#include "headers/funcionalTests.hpp"

void exponentialFuncionalTest(){
    cout << "Exponential Funcional Test started..." << endl;

    Model* model = new Model();
    
    System* pop1 = new System("pop1", 100.0);
    model->add(pop1);

    System* pop2 = new System("pop2", 0.0);
    model->add(pop2);  

    FlowExponential* exponencial = new FlowExponential();
    exponencial->setDestinySystem(pop2);
    exponencial->setOriginSystem(pop1);
    model->add(exponencial);

    model->run(0, 100, 1);
    
    assert(fabs(pop1->getValue() - 36.6032) < 0.0001);
    assert(fabs(pop2->getValue() - 63.3968) < 0.0001);

    delete model; delete pop1; delete pop2; delete exponencial;
}

void logisticalFuncionalTest(){
    cout << "Logistical Funcional Test started..." << endl;

    Model* model = new Model();

    System* p1 = new System("p1", 100.0);
    model->add(p1);

    System* p2 = new System("p2", 10.0);
    model->add(p2);

    FlowLogistic* logistic = new FlowLogistic();
    logistic->setDestinySystem(p2);
    logistic->setOriginSystem(p1);
    model->add(logistic);

    model->run(0, 100, 1);

    assert(fabs(p1->getValue() - 88.2167) < 0.0001);
    assert(fabs(p2->getValue() - 21.7833) < 0.0001);

    delete model; delete p1; delete p2; delete logistic;
}

void complexFuncionalTest(){
    cout << "Complex Funcional Test started..." << endl;

    Model* model = new Model();

    System* q1 = new System("q1", 100.0);
    model->add(q1);

    System* q2 = new System("q2", 0.0);
    model->add(q2);

    System* q3 = new System("q3", 100.0);
    model->add(q3);

    System* q4 = new System("q4", 0.0);
    model->add(q4);

    System* q5 = new System("q5", 0.0);
    model->add(q5);

    FlowComplex* f = new FlowComplex();
    f->setOriginSystem(q1);
    f->setDestinySystem(q2);
    model->add(f);

    FlowComplex* u = new FlowComplex();
    u->setOriginSystem(q3);
    u->setDestinySystem(q4);
    model->add(u);

    FlowComplex* g = new FlowComplex();
    g->setOriginSystem(q1);
    g->setDestinySystem(q3);
    model->add(g);

    FlowComplex* t = new FlowComplex();
    t->setOriginSystem(q2);
    t->setDestinySystem(q3);
    model->add(t);

    FlowComplex* v = new FlowComplex();
    v->setOriginSystem(q4);
    v->setDestinySystem(q1);
    model->add(v);

    FlowComplex* r = new FlowComplex();
    r->setOriginSystem(q2);
    r->setDestinySystem(q5);
    model->add(r);

    model->run(0, 100, 1);

    assert(fabs(q1->getValue() - 31.8513) < 0.0001);
    assert(fabs(q2->getValue() - 18.4003) < 0.0001);
    assert(fabs(q3->getValue() - 77.1143) < 0.0001);
    assert(fabs(q4->getValue() - 56.1728) < 0.0001);
    assert(fabs(q5->getValue() - 16.4612) < 0.0001);

    delete model; delete q1; delete q2; delete q3; 
    delete q4; delete q5; delete v; delete g; 
    delete f; delete u; delete t; delete r;
}
