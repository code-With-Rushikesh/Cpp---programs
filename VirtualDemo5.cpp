#include<iostream>
using namespace std;
#pragma pack(1)
class base
{
    public:
        int i,j;
        void fun()
        {   cout<<"Base fun\n"; }

        void gun()
        {   cout<<"Base gun\n"; }

        virtual void sun()
        {   cout<<"Base sun\n"; }

        virtual void run()
        {   cout<<"Base run\n"; }

        
};  // 16 bytes

#pragma pack(1)
class Derived : public base
{
    public:
        int x;
        void fun()
        {   cout<<"Derived Fun\n"; }

        void sun()
        {   cout<<"Derived sun\n"; }

        virtual void mun()
        {   cout<<"Derived mun\n"; }

        void bun()
        {   cout<<"Derived bun\n"; }

};  // 20 bytes

int main()
{
    base*bp = new Derived();

    cout<<sizeof(base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun(); //error
    //bp->bun(); //error

    return 0;
}