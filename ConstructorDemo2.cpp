#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

        // Default constructor
        PPA()
        {
            cout<<"Inside Default constructor\n";
        }

        // Parametrised constructor
        PPA(int a, int b)
        {
            cout<<"Inside Parametrised constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside destructor\n";
        }
        
};

int main()
{
    PPA pobj1;
    PPA pobj2(11,21);
    
  
    return 0;
}