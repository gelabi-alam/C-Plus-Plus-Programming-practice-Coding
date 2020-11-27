#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    int sum = *p1 + *p2;

    cout<<"Summation is Two Pointer is: "<<sum<<endl;

    return 0;
}
