#ifndef MODEL_HPP
#define MODEL_HPP

#include <vector>
#include "flow.hpp"
#include "system.hpp"

using namespace std;

class Model {

    protected:
        int timeStep = 1;
        int initialTime = 0;
        int finalTime;
        
        vector<System*> vectorSystem;
        vector<Flow*>  vectorFlow;
    

    public:
        Model();
        virtual ~Model();

        void run(int initialTime, int finalTime, int timeStep);
        void run(int finalTime);

        void add(System* system);
        void add(Flow* flow);

        void remove(System* system);
        void remove(Flow* flow); 

    private:
        Model(const Model& cp);
        Model& operator=(const Model& cp);
};


#endif