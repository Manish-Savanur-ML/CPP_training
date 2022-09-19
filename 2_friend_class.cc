#include<iostream>
using namespace std;

class A
{
    int x;
    public:
    A(){
        x = 10;
    }
    friend class B; // Friend class
};
class B
{
    public:
    void display(A &a)
    {
        cout << a.x << endl;
    }
};
main()
{
    A a1;
    B b1;
    b1.display(a1);
}
