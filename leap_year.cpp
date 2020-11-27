#include <iostream>
using namespace std;

int main()
{
    int check;
    cout << "Please, Enter your Year: ";
    cin >> check;

    if((check % 4 == 0 && check % 400 == 0) || (check % 100 != 0 && check % 4 == 0))

        cout << "This year is Leap Year." << endl;

    else
        cout << "This year isn't Leap Year.";
    return 0;
}
