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
        double value;

    public:
        /**
         * @brief Construct a new Flow object
         * 
         */
        Flow();

        /**
         * @brief Construct a new Flow object
         * 
         * @param name Flow's name
         */
        Flow(string name);

        /**
         * @brief Destroy the Flow object
         * 
         */
        virtual ~Flow();

        /**
         * @brief Set the Origin System object
         * 
         * @param origin Origin System
         */
        void setOriginSystem(System* origin);

        /**
         * @brief Get the Origin System object
         * 
         * @return System* 
         */
        System* getOriginSystem();

        /**
         * @brief Set the Destiny System object
         * 
         * @param destiny  Destiny System
         */
        void setDestinySystem(System* destiny);

        /**
         * @brief Get the Destiny System object
         * 
         * @return System* 
         */
        System* getDestinySystem();

        /**
         * @brief Get the Name object
         * 
         * @return string 
         */
        string getName();

        /**
         * @brief Set the Name object
         * 
         * @param name Flow's name
         */
        void setName(string name);

        /**
         * @brief Get the Value object
         * 
         * @return double 
         */
        double getValue();

        /**
         * @brief Set the Value object
         * 
         * @param value Flow's value
         */
        void setValue(double value);

        /**
         * @brief Defines the structure of the equation setted for this flow
         * 
         * @return double 
         */
        virtual double equation() = 0;

    private: 
        Flow(const Flow& cp);
        Flow& operator=(const Flow& cp);
};

#endif