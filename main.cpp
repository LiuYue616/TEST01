#include<iostream>
#include<ctime>
using namespace std;
struct akl
{
    string name;
    long id;
};
int main()
{
    srand((int)time(0));
    akl o[11];
    akl *l=o;
    for(int i=0;i<10;i++)
    {
        l->id=rand()%50;
        l->name=rand()%(51)+50;
        l++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<l->id<<endl;
        cout<<l->name<<endl;
        l--;
    }
}

