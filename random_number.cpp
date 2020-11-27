#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
        char guess_num;
        int random_num;
        cout <<"Enter Your Number 1 to 5: " <<endl;

        cin >> guess_num;
        if(guess_num < '1' || guess_num > '5')
        {
            cout << "Sorry! You are Entered Wrong Number."<<endl;
        }
        else
        {
            guess_num = guess_num - '0';
            random_num = rand()%5 +1;

            if(guess_num == random_num)
            {
                cout<<"You Have Won."<<endl<<endl;
            }
            else
            {
                cout<<"You Have Lost. Don't Worry....Try Again!"<<endl<<endl;
                cout<<"Anyway, Random Number Was: "<<random_num<<endl<<endl;
            }
        }

    }

    return 0;
}


