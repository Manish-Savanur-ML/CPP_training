#include<iostream>
using namespace std;

void fun2()
{
    int f2 = 25;
    cout << f2 << endl;
}

void fun1()
{
    int f1 = 20;
    cout << f1 << endl;
    fun2();
}

void fun()
{
    int f = 24;
    cout << f << endl;
    fun1();
}

main()
{
    int mainVariable = 19;
    cout << mainVariable << endl;
    fun();
}
