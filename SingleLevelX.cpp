#include<iostream>
using namespace std;

class Base
{
    public:
       Base()
       {
           cout<<"Inside Base Constructor\n";

       }

       ~Base()    // (~) This Operator using C++ to Destructor
       {
           cout<<"Inside Base Destructor\n";
       }

       void fun()
       {
           cout<<"Inside Base Fun\n";
       }

       void gun()
       {
        cout<<"Inside Base Gun\n";
       }


};

class Derived : public Base
{
    public:
       int x,y;

       Derived()
       {
           cout<<"Inside Derived Constructor\n";

       }

       ~Derived()      //(~) This Operator using C++ to Destructor
       {
           cout<<"Inside Derived Destructor\n";

       }

       void sun()
       {
           cout<<"Inside Derived Sun\n";
       }
};

int main()
{
    Derived dobj;
    
    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}
