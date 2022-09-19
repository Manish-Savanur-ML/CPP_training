#include<iostream>
using namespace std;

class Copyconstructor
{
    int *emp_id;
    public:
    Copyconstructor(int user_id)
    {
	emp_id = new int(user_id); // Creates new object pointing to emp_id
    }
    ~Copyconstructor()
    {
        delete emp_id;
    }
    
    Copyconstructor(const Copyconstructor &x)
    {
        emp_id = new int(*x.emp_id);
    }

    void change(int new_id)
    {
        delete emp_id;
	emp_id = new int(new_id);
    }
    void show()
    {
        cout << *emp_id << endl;
	cout << "Address of emp id " << emp_id << endl;
    }
};
main()
{
    Copyconstructor s1(10012);
    Copyconstructor s2 = s1;
    s1.show();
    s2.show();
    s2.change(10013);
    s1.show();
    s2.show();
}
