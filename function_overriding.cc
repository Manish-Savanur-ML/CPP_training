#include<iostream>
using namespace std;

class Square
{
    public:
        void calculateArea(float dimension)
	{
            float result = dimension * dimension;
	    cout << "Area of square: " << result << endl;
	}
};

class Circle : public Square
{
    public:
        void calculateArea(float dimension)
        {
            float result = 3.14 * dimension * dimension;
            cout << "Area of circle: " << result << endl;
        }
};

main()
{
    Square s;
    Circle c;
    s.calculateArea(4);
    c.calculateArea(5);
}
