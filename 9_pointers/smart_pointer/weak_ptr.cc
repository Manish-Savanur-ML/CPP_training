#include<iostream>
#include<memory>
using namespace std;

class WeakPtr
{
    public:
    WeakPtr()
    {
        cout << "Contructor Called" << endl;
    }
    ~WeakPtr()
    {
        cout << "Destructor Called" << endl;
    }
};
main()
{
    shared_ptr<WeakPtr> p1 = make_unique<WeakPtr>();
    cout << p1.use_count() << endl;
    {
        weak_ptr<WeakPtr> p2 = p1;
        cout << p1.use_count() << endl;
    }
}
