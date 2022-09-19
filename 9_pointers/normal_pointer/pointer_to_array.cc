#include<iostream>
using namespace std;

main()
{
    const char *names[] = {"Manish", "Geetha", "Rupesh"};
    for (int i = 0 ; i < 3 ; i++)
    {
        cout << names[i] << endl;
    }
    const char *temp;
    temp = names[1];
    names[1] = names[0];
    names[0] = temp;
    for (int i = 0 ; i < 3 ; i++)
    {
        cout << names[i] << endl;
    }
}
