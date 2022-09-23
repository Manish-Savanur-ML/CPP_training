// When shared pointer is has circuler ref with each other object then weak pointer is used
#include<iostream>
#include<string>
#include<memory>
using namespace std;

class Team
{
    shared_ptr<Team> team_member;
    //weak_ptr<Team> team_member;
    public:
    string member_name;
    Team(string name)
    {
        member_name = name;
        cout << "Team member added" << endl;
    }
    ~Team()
    {
        cout << "Team member removed " << member_name << endl;
    }
    void makeMembers(shared_ptr<Team> &other)
    {
        team_member = other;
    }
};

main()
{
    shared_ptr<Team> m1 = make_shared<Team>("Rohit");
    shared_ptr<Team> m2 = make_shared<Team>("Virat");
    m1->makeMembers(m2);
    m2->makeMembers(m1);
    cout << m1.use_count() << " " << m2.use_count() << endl;
    cout << m1.unique() << " " << m2.unique() << endl;
}
