#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

class Vector
{
    private:
    vector<int> toll_price; // declare vector
    vector<int>::iterator ptr;
    public:
    void add_elements()
    {
        for (int i = 0; i < 5; i++)
        {
            toll_price.push_back(i); // Add elecemts
        }
	cout << "Size of vector: " << toll_price.size() << endl;
    }
    void display_elements()
    {
        for (ptr = toll_price.begin(); ptr != toll_price.end(); ptr++)
        {
            cout << *ptr << " "; // Print elements
	    cout << &(*ptr) << endl;
        }
        cout << endl;
    }
    void access_elements()
    {
        cout << "Value at index 1: " << toll_price.at(1) << endl; // Access elements in vector
    }
    void update_elements()
    {
        toll_price.at(1) = 90; // Update elements in vector
        toll_price.at(4) = 100;
        display_elements();
    }
    void delete_elements()
    {
        toll_price.pop_back(); // delete last element in vector
        display_elements();
	cout << "Size of vector: " << toll_price.size() << endl;
    }
};
main()
{
    Vector v1;
    v1.add_elements();
    v1.display_elements();
    v1.access_elements();
    v1.update_elements();
    v1.delete_elements();
}

