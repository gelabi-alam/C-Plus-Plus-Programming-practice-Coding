#include <iostream>
using namespace std;

class Student
{
public:
    const int fee;
    const int id;

    Student(int x, int y) /// Constructor
   :fee(x), id(y) ///Constructor initializer list
    {
        cout << fee <<endl;
        cout << id <<endl;
    }
};

int main()
{
    Student s1(1000, 100);

    return 0;
}
