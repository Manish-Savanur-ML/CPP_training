#include<iostream>
#include"singleton.h"
using namespace std;
main()
{
    Random *r1;
    for (int i = 0 ; i < 5; i++)
    {
        r1 = Random::getInstance();
        r1->getSeq();
    }
    delete r1;
}
