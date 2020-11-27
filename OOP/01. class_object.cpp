
/// Class & Object Declaration
/// Adding Function to the Class
/// Adding Parametrized Function to the Class


#include <iostream>
#include <stdio.h>
using namespace std;

class Student ///Class declaration
{
public:
    char name[30]; ///Member Variable
    int id;
    float gpa;

    void Display()  ///Member Function
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<gpa<<endl;
    }

    void setValue(int x, float y)  ///parametrized Function
    {
        id = x;
        gpa = y;
    }


}; ///Semicolon must be here

int main()
{
    Student foysal; ///object declaration
    cout <<"Please! Enter Your Name: ";
    gets(foysal.name); ///foe gets() function must included stdio.h
    //foysal.id = 06;
    //foysal.gpa = 4.00;

    foysal.setValue(100, 4.50); ///Parameter passing for id & gpa

    foysal.Display(); ///Function Called
    /*
    cout<<foysal.name<<endl;
    cout<<foysal.id<<endl;
    cout<<foysal.gpa<<endl;
    */

    Student tahsan; ///Object create...
    cout <<"Please! Enter Your Name: ";
    gets(tahsan.name); ///foe gets() function must included stdio.h
    //tahsan.id = 107232;
    //tahsan.gpa = 3.80;

    tahsan.setValue(200, 5.00); ///Parameter passing for id & gpa
    tahsan.Display(); /// Function Called
    /*
    cout<<tahsan.name<<endl;
    cout<<tahsan.id<<endl;
    cout<<tahsan.gpa<<endl;
    */

    return 0;
}
