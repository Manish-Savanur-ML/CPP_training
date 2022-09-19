#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout << a + b << endl;
}
void add(double a, double b)
{
    cout << a + b << endl;
}
main()
{
    add(2,3);
    add(4.5, 5.5);
}
