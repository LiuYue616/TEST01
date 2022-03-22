#include<iostream>
#include<string>
using namespace std;
class Volunteer
{
    public:
    string name;
    string address;
    string serviceType;
    string serviceTime;
    Volunteer(){}
    Volunteer(string n,string a)
    {
        name=n;
        address=a;
    }
    void SetType(string type,string time)
    {
        serviceType=type;
        serviceTime=time;
    }
    string GetType()
    {
        return serviceType;
    }
    string GetAddress()
    {
        return serviceTime;
    }
    void work()
    {
        if(serviceTime!="everyday")
        cout << "Providing" <<" "<< serviceType << " " << "on" << " " << serviceTime << endl;
        else 
        cout << "Providing" << " " << serviceType << " " << serviceTime << endl;

    }
};
int main()
{
    Volunteer a("HuMing","幸福里小区");
    a.SetType("Publicity","Saturday");
    a.work();
    Volunteer b("ChenDong","祥和小区");
    b.SetType("MedicalCare","Sunday");
    b.work();
    Volunteer c("lurenjia","XX小区");
    c.SetType("Security","everyday");
    c.work();
    Volunteer d("lurenyi","XX小区");
    d.SetType("Sanitation","Thursday");
    d.work();
}