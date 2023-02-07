#ifndef FLOW_HPP
#define FLOW_HPP

#include "system.hpp"
#include <string>

using namespace std;

class Flow {

    protected:
        string name;
        System *originSystem;
        System *destinySystem;

    public:
        Flow();
        Flow(string name);
        virtual ~Flow();

        void setOriginSystem(System* origin);
        System* getOriginSystem();

        void setDestinySystem(System* destiny);
        System* getDestinySystem();

        string getName();
        void setName(string name);

        virtual double equation() = 0;

    private: 
        Flow(const Flow& cp);
        Flow& operator=(const Flow& cp);
};

#endif