#include<iostream>
using namespace std;

class Random
{
    Random()
    {
        count++;
        cout << "Random instance " << count << endl;
    }

    static int seq_no;
    static int count;
    static Random *instance;
    public:
    ~Random()
    {
        cout << "destructor invoked " << endl;
    }
    static Random* getInstance()
    {
        if (instance == nullptr)
	{
            instance = new Random();
	    return instance;
	}
	else
	{
	    return instance;
	}
    }
    void getSeq()
    {
        seq_no++;
        cout << seq_no << endl;
    }
};
int Random::count = 0;
int Random::seq_no = 0;
Random* Random::instance = nullptr;
