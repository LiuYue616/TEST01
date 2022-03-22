#include<iostream>
#include<string>
#define max 1000
using namespace std;
struct lxr//联系人信息类
{
    string name;
    string sex;
    int age;
    long long nub;
    string address;
};
struct addressbook//通讯录类
{
    struct lxr person[max];
    int msize;
};
void tjlxr(addressbook *abs)//添加联系人功能实现
{
    system("cls");
    if (abs->msize == max)
    {
        cout << "通讯论" << endl;
        return;
    }
    else
    {
        cout << "????????????" << endl;
        cin >> abs->person[abs->msize].name;
        cout << "?????????" << endl;
        while (true)
        {
            cin >> abs->person[abs->msize].sex;
            if (abs->person[abs->msize].sex == "??" || abs->person[abs->msize].sex == "?")
            {
                break;
            }
            cout << "?????????????????" << endl;
        }
        cout<<"??????????"<<endl;
        cin>>abs->person[abs->msize].age;
        cout<<"??????绰??"<<endl;
        cin>>abs->person[abs->msize].nub;
        cout<<"????????????"<<endl;
        cin>>abs->person[abs->msize].address;
        abs->msize++;
        cout<<"??????"<<endl;
        system("pause");
        system("cls");
    } 
}
void xslxr(addressbook *abs)//显示联系人功能实现
{
    system("cls");
    if(abs->msize==0)
    {
        cout<<"?????????"<<endl;
        system("pause");
        system("cls");
    }
    else
    {
        int i=0;
        for(;i<abs->msize;i++)
        {
            cout<<"??????"<<abs->person[i].name<<"\t";
            cout<<"???"<<abs->person[i].sex<<"\t";
            cout<<"????"<<abs->person[i].age<<"\t";
            cout<<"?绰: "<<abs->person[i].nub<<"\t";
            cout<<"???????"<<abs->person[i].address<<endl;
        }
        system("pause");
        system("cls");
    }
   
}
void sclxr(addressbook *abs)//删除联系人功能实现
{
    system("cls");
    string m;
    int t;
    bool p=false;
    cout << "????????????????????" << endl;
    cin >> m;
    for (int i = 0; i < abs->msize; i++)
    {
        if (abs->person[i].name == m)
        {
            t = i;
            p = 1; break;
        }
    }
    if (p ==1)
    {
        for (; t < abs->msize; t++)
        {
            abs->person[t] = abs->person[t + 1];
        }
        abs->msize--;
        cout << "??????" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        cout << "δ????????" << endl;
        system("pause");
        system("cls");
    }
}
void czlxr(addressbook *abs)//查找联系人功能实现
{
    system("cls");
    cout<<"???????????????????"<<endl;
    string n;
    cin>>n;
    for(int i=0;i<abs->msize;i++)
    {
        if(abs->person[i].name==n)
        {
            cout<<"??????"<<abs->person[i].name<<"\t";
            cout<<"???"<<abs->person[i].sex<<"\t";
            cout<<"????"<<abs->person[i].age<<"\t";
            cout<<"?绰: "<<abs->person[i].nub<<"\t";
            cout<<"???????"<<abs->person[i].address<<endl;
            system("pause");
            system("cls");
            return ;
        }
    }
    cout<<"?鲻?????????"<<endl;
    system("pause");
    system("cls");
}
void showxx(addressbook *abs,int t)//查看联系人信息功能实现
{
    cout<<"1.??????"<<abs->person[t].name<<endl;
    cout<<"2.???"<<abs->person[t].sex<<endl;
    cout<<"3.????"<<abs->person[t].age<<endl;
    cout<<"4.?绰: "<<abs->person[t].nub<<endl;
    cout<<"5.???????"<<abs->person[t].address<<endl;
}
void xgxx(addressbook *abs,int t)//联系人信息修改功能实现
{
    int o;
    string nam;string se;int ag;long long nu;string add;
    while(true)
    {
        showxx(abs,t);
        cout<<"????????????????"<<endl;
        cout<<"****????0???*****"<<endl;
        cin>>o;
        switch(o)
        {
            case 1:{cout<<"?????????????"<<endl;cin>>nam;abs->person[t].name=nam;break;}
            case 2:{cout<<"????????????"<<endl;cin>>se;abs->person[t].sex=se;break;}
            case 3:{cout<<"?????????????"<<endl;cin>>ag;abs->person[t].age=ag;break;}
            case 4:{cout<<"?????????绰"<<endl;cin>>nu;abs->person[t].nub=nu;break;}
            case 5:{cout<<"?????????????"<<endl;cin>>add;abs->person[t].address=add;break;}
            case 0:return;break;
            default :cout<<"??????????????"<<endl;break;
        }
    }   
}
void xglxr(addressbook *abs)//修改联系人功能
{
    cout<<"??????????????????"<<endl;
    string n;
    int t;
    cin>>n;
    bool p=false;
    for(int i=0;i<abs->msize;i++)
    {
        if(abs->person[i].name==n)
        {
            t=i;
            p=1;break;
        }
    }
    if(p)
    {
         xgxx(abs,t);
    }
    else
    {
        cout<<"δ???????????????"<<endl;
    }
        system("pause");
        system("cls");
}
void shownemu() //主页面函数
{
    cout<<"***************************"<<endl;
    cout<<"*******1???????????*******"<<endl;
    cout<<"*******2??????????*******"<<endl;
    cout<<"*******3??????????*******"<<endl;
    cout<<"*******4???????????*******"<<endl;
    cout<<"*******5??????????*******"<<endl;
    cout<<"*******6??????????*******"<<endl;
    cout<<"*******0????????*******"<<endl;
    cout<<"***************************"<<endl;
}
void qklxr(addressbook *abs)//清空联系人功能实现
{
    abs->msize=0;
    system("pause");
    system("cls");
}
int main()//主函数
{
    
    int sel;
    addressbook abs;
    abs.msize = 0;
    
    while(true)
    {   
        shownemu();
        cin>>sel;
        switch(sel)
    {
        case 1:tjlxr(&abs); break;
        case 2:xslxr(&abs);break;
        case 3:sclxr(&abs);break;
        case 4:czlxr(&abs);break;
        case 5:xglxr(&abs);break;
        case 6:qklxr(&abs);break;
        case 0:cout<<"?????????"<<endl;system("pause");return 0;break;
        default :cout<<"??????????????Ч???"<<endl;shownemu();break;
    }
    }
    system("pause");
}