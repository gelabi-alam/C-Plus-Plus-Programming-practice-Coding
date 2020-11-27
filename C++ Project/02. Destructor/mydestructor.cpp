#include "mydestructor.h"
#include <iostream>
using namespace std;

myDestructor::myDestructor()
{
    cout << "Constructor is Called."<<endl;
}
myDestructor:: ~myDestructor()
{
    cout << "Destructor is Called."<<endl;
}
