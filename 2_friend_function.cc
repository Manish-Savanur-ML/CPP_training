#include<iostream>
using namespace std;
/*
class A
{
    int x;
    void show_pass()
    {
        cout << "Password are private" << endl;
    }
    public:
    A()
    {
        x = 10;
    }
    friend void show(A &);
};

void show(A &a)
{
     cout << a.x << endl;
     a.show_pass();
}
main()
{
    A a1;
    show(a1);
}
*/

// Friend function with 2 classess
/*
class ABC; // Forward declaration

class XYZ
{
    int xx;
    public:
    XYZ()
    {
        xx = 15;
    }
    friend void max(XYZ &, ABC &);
};
class ABC
{
    int aa;
    friend void max(XYZ &, ABC &);
    public:
    ABC()
    {
        aa = 10;
    }
    //friend void max(XYZ &, ABC &);
};

void max(XYZ &x, ABC &a)
{
    if (x.xx > a.aa)
    {
        cout << x.xx << endl;
    }
    else
    {
        cout << a.aa << endl;
    }
}

main()
{
    XYZ x;
    ABC a;
    max(x,a);
}
*/
// Friend function from other class

class A
{
    int a;
    public:
    A()
    {
        a = 200;
    }
    void showA(A &);
};

class B
{
    public:
    friend void A::showA(A &);
};

void A::showA(A &a)
{
    cout << a.a << endl;
}

main()
{
    A a1;
    B b1;
    a1.showA(a1);
}
