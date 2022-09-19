#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;

class Map
{
    private:
    map<string, int>my_dict;
    map<string, int>::iterator ptr;
    public:
    void add_map()
    {
        my_dict.insert(pair<string, int>("Abstraction", 33));
        my_dict.insert(pair<string, int>("Pointers", 60));
        my_dict.insert(pair<string, int>("Virtual_function", 100));
        my_dict["Functions"] = 55; // Insert value in map if key not present
	cout << "Size of map: " << my_dict.size() << endl;
    }
    void display_map()
    {
        for (ptr = my_dict.begin(); ptr != my_dict.end(); ptr++)
        {
            cout << ptr->first << " " << ptr->second;
            cout << endl;
        }
    }
    void update_map()
    {
         my_dict["Functions"] = 101; // Update value if key present
	 display_map();
    }
    void delete_map()
    {
        my_dict.erase("Functions");// Erase values of key functions
	display_map();
	//my_dict.clear(); Removes all elements in map
        cout << "Size of map: " << my_dict.size() << endl;
    }
};

main()
{
    Map m1;
    m1.add_map();
    m1.display_map();
    m1.update_map();
    m1.delete_map();
}
