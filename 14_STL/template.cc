#include <iostream>

using namespace std;

template <class T>
class smartTemplate
{
public:
    T *pointer;
    explicit smartTemplate(T *p = nullptr) { pointer = p; }
    ~smartTemplate() { delete pointer; }
    T& operator*() { return *pointer; }
};

int main()
{

    //float *p = new float(3.142);
    //smartTemplate<float> smart = smartTemplate<float>(p);
    //cout << *smart << endl;
    int *p = new int(25);
    smartTemplate<int> smart = smartTemplate<int>(p);
    cout << *smart << endl;
}
