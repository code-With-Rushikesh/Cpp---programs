#include<iostream>
using namespace std;

int main ()
{
    int Standred = 0;

    cout<<"Enter Your Standred\n";
    cin>>Standred;
    if (Standred == 1)
    {
         cout<<"Exam Start At 9:30 AM\n";
      
    }     

    else if (Standred == 2)
    {
        cout<<"Exam Start At 10:30 AM\n";
    }

    else if (Standred == 3)
    {
        cout<<"Exam Start At 11:30 AM\n";

    }

    else
    {
        cout<<"Exam Is Invalid\n";
    }


    return 0;
}