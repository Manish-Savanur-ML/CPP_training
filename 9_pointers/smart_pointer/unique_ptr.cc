#include<iostream>
#include<memory>
using namespace std;

class UniquePtr
{
    public:
    UniquePtr()
    {
        cout << "Contructor Called" << endl;
    }
    ~UniquePtr()
    {
        cout << "Destructor Called" << endl;
    }
};
main()
{
    {
        unique_ptr<UniquePtr> p1 = make_unique<UniquePtr>();
	cout << "Size " << sizeof(p1) << endl;
    }
    cout << "Unique Ptr expired" << endl;
}
