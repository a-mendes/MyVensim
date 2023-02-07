#ifndef FLOW_EXPONENTIAL_HPP
#define FLOW_EXPONENTIAL_HPP

#include "../../../src/headers/flow.hpp"


class FlowExponential : public Flow {
    public:
        virtual double equation();
};

#endif