#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
        char ch[3] = {'a', 'b'};
        int guess_num, random_num;
        cout <<"Enter Your Number 1 to 5: " <<endl;

        cin >> guess_num;
        if(guess_num >= 6)
        {
            cout << "Sorry! You are Entered Wrong Number."<<endl;
        }
        else if(guess_num == ch[0])
        {
            cout << "Sorry! You are Entered Wrong Key."<<endl;
        }
        else
        {
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
