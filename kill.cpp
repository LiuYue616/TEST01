#include<iostream>
using namespace std;
class wo
{
    public:
    virtual void say()
    {
        cout<<"fuck"<<endl;
    }
};
class ni:public wo
{
    public:
    virtual void say()
    {
        cout<<"you"<<endl;
    }
};
int main()
{
    wo* pt;
    wo a;
    ni b;
    pt=&a;
    pt->say();
    pt=&b;
    pt->say();
}