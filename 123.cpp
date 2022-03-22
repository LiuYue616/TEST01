//#include<iostream>
//using namespace std;
//class Pet
//{
//protected:
//    double weight;
//public:
//    Pet():weight(0) {}
//    Pet(double a)
//    {
//        weight = a;
//    }
//    virtual void bark() = 0;
//    double get_w()
//    {
//        return weight;
//    }
//};
//class Dog :public Pet
//{
//public:
//    Dog(double a=20) :Pet(a) {}
//    void bark()
//    {
//        cout << "汪汪" << endl;
//    }
//};
//class Cat :public Pet
//{
//public:
//    Cat(double a=2) :Pet(a) {}
//    void bark()
//    {
//        cout << "喵喵" << endl;
//    }
//};
//class Mouse :public Pet
//{
//public:
//    Mouse(double a=0.04) :Pet(a) {}
//    void bark()
//    {
//        cout << "吱吱" << endl;
//    }
//};
//int main()
//{
//    Pet* p;
//    Dog dog;
//    Cat cat;
//    Mouse mouse;
//    p = &dog;
//    p->bark();
//    cout << p->get_w() << endl;
//    p = &cat;
//    p->bark();
//    cout << p->get_w() << endl;
//    p = &mouse;
//    p->bark();
//    cout << p->get_w() << endl;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Volunteer
//{
//public:
//    string name;
//    string address;
//    string serviceType;
//    string serviceTime;
//    Volunteer() {}
//    Volunteer(string n, string a)
//    {
//        name = n;
//        address = a;
//    }
//    void SetType(string type, string time)
//    {
//        serviceType = type;
//        serviceTime = time;
//    }
//    string GetType()
//    {
//        return serviceType;
//    }
//    string GetAddress()
//    {
//        return serviceTime;
//    }
//    void work()
//    {
//        if(serviceTime!="everyday")
//        cout << "Providing" <<" "<< serviceType << " " << "on" << " " << serviceTime << endl;
//        else
//        cout << "Providing" << " " << serviceType << " " << serviceTime << endl;
//
//    }
//};
//int main()
//{
//    Volunteer a("HuMing", "幸福里小区");
//    a.SetType("Publicity", "Saturday");
//    a.work();
//    Volunteer b("ChenDong", "祥和小区");
//    b.SetType("MedicalCare", "Sunday");
//    b.work();
//    Volunteer c("lurenjia", "XX小区");
//    c.SetType("Security", "everyday");
//    c.work();
//    Volunteer d("lurenyi", "XX小区");
//    d.SetType("Sanitation", "Thursday");
//    d.work();
//}
#include<iostream>
using namespace std;
class Pet
{
protected:
    double weight;
public:
    Pet() :weight(0) {}
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
    Dog(double a = 20) :Pet(a) {}
    void bark()
    {
        cout << "汪汪" << endl;
    }
};
class Cat :public Pet
{
public:
    Cat(double a = 2) :Pet(a) {}
    void bark()
    {
        cout << "喵喵" << endl;
    }
};
class Mouse :public Pet
{
public:
    Mouse(double a = 0.04) :Pet(a) {}
    void bark()
    {
        cout << "吱吱" << endl;
    }
};

using namespace std;
int main() {

    int a[] = { 2,1,2,1,0,2,0,2,1,1,0,0 };
    int head = 0;
    int tail = 11;
    int i = 0;
    cout << "start!" << endl;
    while (i<tail) {
        switch (a[i])
        {
        case 0:if (i == head) {
            i++; head++;
        }
              else {
            swap(a[i], a[head]);
            head++;
        }
              break;
        case 1:i++; break;
        case 2:if (i == tail) {
            i++; tail--;
        }
              else {
            swap(a[i], a[tail]);
            tail--;
        }
              break;
        }
    }
    for (int i = 0; i < 12; i++) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

