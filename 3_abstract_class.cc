#include<iostream>
using namespace std;

// Abstract Class
class Shape
{
    public:
        virtual void calculateArea(float d) = 0; // Pure virtual function
};

class Square : public Shape
{
    public:
        void calculateArea(float dimension)
	{
            float result = dimension * dimension;
	    cout << "Area of square: " << result << endl;
	}
};

class Circle : public Shape
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
    Shape *shape1;
    Square s;
    Circle c;
    shape1 = &s;
    s.calculateArea(4);
    c.calculateArea(5);
    shape1->calculateArea(5);
}
