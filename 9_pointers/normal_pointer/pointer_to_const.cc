#include<iostream>
using namespace std;

main()
{
    char p1[] = "Hi";
    char p2[10];
    //p2 = p1;
    const char *p;
    const char *s = "bye";
    p = s;
    cout << p << endl;
}
