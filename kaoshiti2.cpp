#include<iostream>
using namespace std;
class Rectangle
{
    public:
    double longth;
    double width;
    double price;
    Rectangle(double a=0,double b=0)
    {
        longth=a;
        width=b;
        price=30*2*(longth+width);
    }
    void set(double a,double b)
    {
        longth=a;
        width=b;
        price=30*2*(longth+width);
    }
    double Perimeter()
    {
        return 2*(longth+width);
    }
    double Area()
    {
        return longth*width;
    }
};
class Aisle
{
    public:
    double wide_l;
    double wide_w;
    double price;
    Aisle(double a=0,double b=0)
    {
        wide_l=a+2.5;
        wide_w=b+2.5;
        price=(wide_l*wide_w-a*b)*200;
    }
    Aisle(Aisle &rhs)
    {
        wide_l=rhs.wide_l;
        wide_w=rhs.wide_w;
        price=rhs.price;
    }
    Aisle(Rectangle &rhs)
    {
        wide_l=rhs.longth+2.5;
        wide_w=rhs.width+2.5;
        price=(wide_l*wide_w-rhs.Area())*200;
    }
    double Perimeter()
    {
        return 2*(2*(wide_l-2.5+wide_w-2.5));
    }
    double Area()
    {
        price=35*(2.5*wide_l+2.5*wide_w-6.25);
        return 2.5*wide_l+2.5*wide_w-6.25;
    }
    Aisle& operator = (const Aisle &rhs)
{
    this->wide_l=rhs.wide_l;
    this->wide_w=rhs.wide_w;
    this->price=rhs.price;
    return *this;
}
};
int main()
{
    double a,b;
    cin>>a>>b;
    Rectangle c;
    c.set(a,b);
    Aisle d(c);
    cout<<c.price<<endl;
    cout<<d.price<<endl;
}