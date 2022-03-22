#include<iostream>
using namespace std;
class Pet
{
protected:
    double weight;
public:
    Pet():weight(0) {}
    Pet(double a)
    {
        weight = a;
    }
    virtual void bark() = 0;
    double get_w()
    {
        return weight;
    }
};
class Dog :public Pet
{
public:
    Dog(double a=20) :Pet(a) {}
    void bark()
    {
        cout << "汪汪" << endl;
    }
};
class Cat :public Pet
{
public:
    Cat(double a=2) :Pet(a) {}
    void bark()
    {
        cout << "喵喵" << endl;
    }
};
class Mouse :public Pet
{
public:
    Mouse(double a=0.04) :Pet(a) {}
    void bark()
    {
        cout << "吱吱" << endl;
    }
};
int main()
{
    Pet* p[3];
    Dog dog();
    Cat cat;
    Mouse mouse;
    p[0] = &dog;
    p[1] = &cat;
    p[2] = &mouse;
    p[0]->bark();
    cout << p[0]->get_w() << endl;
    p[1]->bark();
    cout << p[1]->get_w() << endl;
    p[2]->bark();
    cout << p[2]->get_w() << endl;
}