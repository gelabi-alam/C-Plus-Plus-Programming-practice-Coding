#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    for(int i = 1; i <=10; i++)
    {
        int random_number = rand() % 10+1;
        cout << random_number<<endl;
    }

    return 0;
}
