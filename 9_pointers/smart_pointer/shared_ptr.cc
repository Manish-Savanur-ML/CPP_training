#include<iostream>
#include<memory>
using namespace std;

class SharedPtr
{
    public:
    SharedPtr()
    {
        cout << "Contructor Called" << endl;
    }
    ~SharedPtr()
    {
        cout << "Destructor Called" << endl;
    }
};
main()
{
    shared_ptr<SharedPtr> p1 = make_unique<SharedPtr>();
    cout << p1.use_count() << endl;
    {
        shared_ptr<SharedPtr> p2 = p1;
        cout << p2.use_count() << endl;
    }
    cout << p1.use_count() << endl;
}
