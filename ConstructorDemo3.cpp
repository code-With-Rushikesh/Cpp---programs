#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

        PPA()
        {
            cout<<"Inside Default constructor\n";
        }

        PPA(int a, int b)
        {
            cout<<"Inside Parametrised constructor\n";
        }

        PPA(PPA &obj)
        {
            cout<<"Inside Copy constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside destructor\n";
        }
};

int main()
{
    PPA pobj1;              // Default
    PPA pobj2(11,21);       // Parametrised
    PPA pobj3(pobj1);       // Copy
  
    return 0;
}