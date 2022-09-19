#include <iostream>
#include<thread>
#include<mutex>
using namespace std;

int paytm_wallet = 0;
mutex m;

void addMoney()
{
    m.lock();
    paytm_wallet++;
    m.unlock();
}

main()
{
    thread t1(addMoney);
    thread t2(addMoney);
    t1.join();
    t2.join();
    cout << paytm_wallet;
}
