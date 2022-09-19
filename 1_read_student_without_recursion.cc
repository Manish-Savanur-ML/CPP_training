#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        string name;
        int id;
        string branch;
    public:
        void set_details(string student_name, int emp_id, string br)
	{
            name = student_name;
	    id = emp_id;
	    branch = br;
	}
	void show()
        {
            cout << "Student Name: " << name << endl;
	    cout << "Student id: " << id << endl;
	    cout << "Student branch: " << branch << endl;
	}
};

main()
{
    Student s1;
    int N;
    int s_id;
    string s_name;
    string s_br;
    cout << "Enter number of students";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter name: ";
	cin >> s_name;
	cout << "Enter id: ";
        cin >> s_id;
        cout << "Enter branch: ";
        cin >> s_br;
	s1.set_details(s_name, s_id, s_br);
	s1.show();
    }
}
