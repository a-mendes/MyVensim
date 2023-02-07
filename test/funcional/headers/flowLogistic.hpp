#ifndef FLOW_LOGISTIC_HPP
#define FLOW_LOGISTIC_HPP

#include "../../../src/headers/flow.hpp"


class FlowLogistic : public Flow {
    public:
        virtual double equation();
};

#endif