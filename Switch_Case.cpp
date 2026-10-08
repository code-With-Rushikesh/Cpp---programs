#include<iostream>
using namespace std;

int main ()
{
    int Standred = 0;

    cout<<"Enter Your Standred\n";
    cin>>Standred;
    switch (Standred)
    {
        case 1:
            cout<<"Exam Start At 9:30 AM\n";
            break;

        case 2:
            cout<<"Exam Start At 10:30 AM\n";
            break;
            
        case 3:
            cout<<"Exam Start At 11:30 AM\n";
            break;
            
        default :
            cout<<"Exam Is Invalid\n";
    }

    return 0;
}