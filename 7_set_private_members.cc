#include<iostream>
using namespace std;
class Private
{
    private:
    int pin;
    public:
    Private(int atm_pin)
    {
        pin = atm_pin;
    }
    void set_pin(int atm_pin)
    {
        pin = atm_pin;
    }
    void show()
    {
        cout << pin << endl;
    }

};
main()
{
    Private p1(3344);
    p1.show();
    p1.set_pin(3344);
    p1.show();
}

