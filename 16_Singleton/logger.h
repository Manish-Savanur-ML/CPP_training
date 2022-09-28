#include<iostream>
#include<fstream>
#include<string>
#include<mutex>
using namespace std;
class Logger
{
    static mutex m;
    Logger()
    {
        count++;
        cout << "Random instance " << count << endl;
    }
    static int count;
    static Logger *instance;
    public:
    ~Logger()
    {
        cout << "destructor invoked " << endl;
    }
    static Logger* getInstance()
    {
        m.lock();
        if (instance == nullptr)
	{
            instance = new Logger();
	    m.unlock();
	    return instance;
	}
	else
	{
            m.unlock();
	    return instance;
	}
    }
    void info(string msg, ofstream &fileno)
    {
        fileno << "[INFO] " << msg << endl;
    }
    void warn(string msg, ofstream &fileno)
    {
        fileno << "[WARN] " << msg << endl;
    }
    void error(string msg, ofstream &fileno)
    {
        fileno << "[ERROR] " << msg << endl;
    }
};
int Logger::count = 0;
Logger* Logger::instance = nullptr;
mutex Logger::m;
