#include<iostream>
using namespace std;
template<class T>
double average(T a,int n)
{
    double size=n;
    double m=a;
    return m/size;
}
template<class T>
double average(T a[],int n)
{
    double size=n;
    double sum=0;
    for(int i=0;i<size;++i)
    {
        sum+=a[i];
    }
    return sum/n;
}
template<class T>
double jige(T a[],int n)
{
    double size=n;
    double no=0;
    for(int i=0;i<size;++i)
    {
        if(a[i]<60) no=no+1;
    }
    return no/size;
}
template<class T>
double youxiu(T a[],int n)
{
    double size=n;
    double yes=0;
    for(int i=0;i<size;++i)
    {
        if(a[i]>90) yes=yes+1;
    }
    return yes/size;
}
int main()
{
    float a[]={56.5,45.5,75.5,23.2,90.2,68.2,88.5,99,76.6};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<average(a,size)<<endl;
    cout<<jige(a,size)<<endl;
    cout<<youxiu(a,size)<<endl;
}
