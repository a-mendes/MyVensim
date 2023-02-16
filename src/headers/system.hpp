#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <string>
using namespace std;

class System {
    protected:
        string name;
        double value;

    public:
        /**
         * @brief Construct a new System object
         * 
         * @param name System's name 
         * @param value System's initial value 
         */
        System(string name, double value);

        /**
         * @brief Destroy the System object
         */
        virtual ~System();

        /**
         * @brief Get the Value object
         * 
         * @return double 
         */
        double getValue();

        /**
         * @brief Set the Value object
         * 
         * @param value System's new value
         */
        void setValue(double value);

        /**
         * @brief Get the Name object
         * 
         * @return string 
         */
        string getName();

        /**
         * @brief Set the Name object
         * 
         * @param name System's name
         */
        void setName(string name);

    private:
        System(const System& cp);
        System& operator=(const System& cp);
};

#endif