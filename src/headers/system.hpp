#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <string>
using namespace std;

class System {
    protected:
        string name;
        double value;

    public:
        System(string name, double value);
        virtual ~System();

        double getValue();
        void setValue(double value);

        string getName();
        void setName(string name);

    private:
        System(const System& cp);
        System& operator=(const System& cp);
};

#endif