#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Logger
{
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
        if (instance == nullptr)
	{
            instance = new Logger();
	    return instance;
	}
	else
	{
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
