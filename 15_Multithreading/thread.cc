#include <iostream>
#include<thread>
using namespace std;
using namespace std::chrono;

void forcast(int temprature)
{
    while(1)
    {
        temprature++;
        cout << "Bangalore wheather " << temprature << endl;
        this_thread::sleep_for(seconds(5));
    }
}
int main()
{
    int temp = 26;
    thread t1(forcast, temp);
    t1.join();
    return 0;
}
