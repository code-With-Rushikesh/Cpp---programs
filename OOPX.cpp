#include<iostream>
using namespace std;

class Arithematic
{
    public:
       int no1;
       int no2;

       Arithematic()
       {
           
           no1=0;
           no2=0;
       }

       Arithematic(int i, int j)
       {

           no1=i;
           no2=j;
       }

       int addition()
       {

           int ans=0;
           ans=no1+no2;
           return ans;
       }
};

int main()
{
    
    Arithematic aobj1(10,11);
    int result=0;

    result=aobj1.addition();

    cout<<"Addition is :"<<result<<"\n";


    return 0;
}