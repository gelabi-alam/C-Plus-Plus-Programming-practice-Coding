#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p;
    p = &x;

    cout<<"It's Print X Value: "<<x<<endl;
    cout<<"It's Print X Memory Address: "<<&x<<endl;
    cout<<"It's Print *P (x) Value: "<<*p<<endl;
    cout<<"It's Print P (x) Memory Address: "<<p<<endl;

    return 0;
}
