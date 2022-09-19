#include<iostream>
#include<string>
using namespace std;

class Bank
{
    private:
	int x = 0;
	string user;
	string pass;
        void register_user()
        {
	    cout << "Enter username:";
	    cin >> user;
	    cout << "Enter password:";
	    cin >> pass;
	    user_count++;
        }
    public:
	static int user_count;
        void read_info()
	{
	    register_user();
	}
	static void get_user()
	{
	    cout << "Total user in bank: " << user_count << endl;
	}
	
        void change_pass() const
	{
	    x++;
	}
	

};

int Bank::user_count = 0;

main()
{
    int N;
    Bank b1;
    Bank b2;
    cout << "Enter user to register:";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        b1.read_info();
    }
    for (int i = 0; i < N; i++)
    {
        b2.read_info();
    }
    Bank::get_user();
    b1.change_pass();
}
