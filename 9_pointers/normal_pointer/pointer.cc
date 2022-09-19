#include<iostream>
using namespace std;

class Pointers
{
    int x = 10;
    int *p = &x;
    int **k = &p;
    public:
    void show()
    {
        cout << "Address of p " << p << endl;
	cout << "Value of p " << *p << endl;
    }
    void pointer_to_pointer()
    {
        cout << "Address of k " << &k << endl;
        cout << "Value of k " << **k << endl;
	cout << "Address of x " << *k << endl;
    }
};
main()
{
    Pointers p1;
    p1.show();
    Pointers *ptr = new Pointers();
    ptr->show();
    cout << "Address of ptr " << ptr << endl;
    p1.pointer_to_pointer();
}
