#include<iostream>
#include<list>
#include<iterator>
using namespace std;

class List
{
    list<int> numbers;
    list<int>::iterator it;
    public:
    void add(int num){
        numbers.push_front(num);
	numbers.push_back(num * 2);
    }
    void delete_list(){
        numbers.pop_front();
	numbers.pop_back();
    }
    void display(){
        for (it = numbers.begin() ; it != numbers.end() ; it++){
            cout << *it << " ";
	}
	cout << endl;
    }
    void other_ops(){
        numbers.reverse();
	display();
	cout << numbers.size() << endl;;
	numbers.sort();
	display();
    }
};
main(){
    List stl;
    for (int i = 1; i < 6 ; i++){
        stl.add(i);
    }
    stl.display();
    stl.delete_list();
    stl.display();
    stl.other_ops();
}
