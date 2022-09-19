#include<iostream>
using namespace std;

class Pfunction
{
    public:
    void swap(int *x, int *y)
    {
        int t;
	t = *y;
	*y = *x;
	*x = t;
    }
};
main()
{
    Pfunction p1;
    int a = 10;
    int b = 20;
    cout << a << " " << b << endl;
    p1.swap(&a, &b);
    cout << "After swap " << a << " " << b << endl;
}
