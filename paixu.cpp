#include<iostream>
#include<ctime>
using namespace std;
void paixu(int *b,int len)
{
    int temp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                 temp=b[j+1];
                 b[j+1]=b[j];
                 b[j]=temp;
            }
           
        }

    }
}
int main()
{
    int a[10];
    srand((int)time(0));
    for(int t=0;t<10;t++)
    {
         a[t]=rand()%50;
    }
    for(int t=0;t<10;t++)
    {
        cout<<a[t]<<"**";
    }
    int len=sizeof(a)/sizeof(a[0]);
    cout<<endl;
    paixu(a,len);
    for(int t=0;t<10;t++)
    {
        cout<<a[t]<<"**";
    }
    cout<<endl;
    system("pause");
    system("cls");
}