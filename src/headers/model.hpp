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
        /**
         * @brief Construct a new Model object
         * 
         */
        Model();

        /**
         * @brief Destroy the Model object
         * 
         */
        virtual ~Model();

        /**
         * @brief Runs the simulation for the specified time modifying Systems values
         * 
         * @param initialTime Time when simulation starts
         * 
         * @param finalTime Time when simulation finishes
         * 
         * @param timeStep Time units used for progress the time
         */
        void run(int initialTime, int finalTime, int timeStep);
        
        /**
         * @brief Runs the simulation for the specified time modifying Systems values
         * 
         * @param finalTime Time when simulation finishes
         */
        void run(int finalTime);

        /**
         * @brief Adds a System to the current Model
         * 
         * @param system System to be add to the Model
         */
        void add(System* system);

        /**
         * @brief Adds a Flow to the current Model
         * 
         * @param flow Flow to be add to the Model
         */
        void add(Flow* flow);

        /**
         * @brief Removes a System from the current Model
         * 
         * @param system System to be removed
         */
        void remove(System* system);

        /**
         * @brief Removes a FLow from the current Model
         * 
         * @param system Flow to be removed
         */
        void remove(Flow* flow); 

    private:
        Model(const Model& cp);
        Model& operator=(const Model& cp);
};


#endif