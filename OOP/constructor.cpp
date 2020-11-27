#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    float gpa;

    void display()
    {
        cout <<id<<endl<<gpa<<endl;
    }
    Student(int x, float y) ///Constructor
    {
        id = x;
        gpa = y;
    }

};

int main()
{
    Student tahsan (100, 4.50);
    tahsan.display();

    return 0;
}
