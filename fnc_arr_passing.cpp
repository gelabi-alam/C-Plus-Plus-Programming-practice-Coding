#include <iostream>
using namespace std;

int displayArray(int num[])
{
    for(int i = 1; i <= 5; i++)
    {
        cout << num[i-1] << endl;
    }
    return 0;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    displayArray(arr);

    return 0;
}
