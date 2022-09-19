#include<iostream>
#include<ctime>
using namespace std;
main()
{
    tm *curr_tm;
    char s[20];
    time_t now = time(0); // Current time(sec) in linux OS
    curr_tm = localtime(&now); // local time in linux OS
    cout << now << endl;
    strftime(s, 50, "Current time is %T", curr_tm);
    cout << s << endl;
}

