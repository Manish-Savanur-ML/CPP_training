#include <iostream>

using namespace std;

class Base
{

public:
    Base() { cout << "Base class constructor." << endl; }
    virtual ~Base() { cout << "Base class Destructor." << endl; }
};

class Derived : public Base
{

public:
    Derived() { cout << "Derived class constructor." << endl; }
    ~Derived() { cout << "Derived class Destructor." << endl; }
};

main()
{
    //Base *b1 = new Base();
    //Derived *d1 = new Derived();
    //delete b1;
    //delete d1;
    Base *poly = new Derived();
    delete poly;
}
