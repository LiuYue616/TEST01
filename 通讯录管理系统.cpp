#include<iostream>
#include<string>
#define max 1000
using namespace std;
struct lxr//��ϵ����Ϣ��
{
    string name;
    string sex;
    int age;
    long long nub;
    string address;
};
struct addressbook//ͨѶ¼��
{
    struct lxr person[max];
    int msize;
};
void tjlxr(addressbook *abs)//�����ϵ�˹���ʵ��
{
    system("cls");
    if (abs->msize == max)
    {
        cout << "ͨѶ��" << endl;
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
        cout<<"??????��??"<<endl;
        cin>>abs->person[abs->msize].nub;
        cout<<"????????????"<<endl;
        cin>>abs->person[abs->msize].address;
        abs->msize++;
        cout<<"??????"<<endl;
        system("pause");
        system("cls");
    } 
}
void xslxr(addressbook *abs)//��ʾ��ϵ�˹���ʵ��
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
            cout<<"?��: "<<abs->person[i].nub<<"\t";
            cout<<"???????"<<abs->person[i].address<<endl;
        }
        system("pause");
        system("cls");
    }
   
}
void sclxr(addressbook *abs)//ɾ����ϵ�˹���ʵ��
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
        cout << "��????????" << endl;
        system("pause");
        system("cls");
    }
}
void czlxr(addressbook *abs)//������ϵ�˹���ʵ��
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
            cout<<"?��: "<<abs->person[i].nub<<"\t";
            cout<<"???????"<<abs->person[i].address<<endl;
            system("pause");
            system("cls");
            return ;
        }
    }
    cout<<"?��?????????"<<endl;
    system("pause");
    system("cls");
}
void showxx(addressbook *abs,int t)//�鿴��ϵ����Ϣ����ʵ��
{
    cout<<"1.??????"<<abs->person[t].name<<endl;
    cout<<"2.???"<<abs->person[t].sex<<endl;
    cout<<"3.????"<<abs->person[t].age<<endl;
    cout<<"4.?��: "<<abs->person[t].nub<<endl;
    cout<<"5.???????"<<abs->person[t].address<<endl;
}
void xgxx(addressbook *abs,int t)//��ϵ����Ϣ�޸Ĺ���ʵ��
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
            case 4:{cout<<"?????????��"<<endl;cin>>nu;abs->person[t].nub=nu;break;}
            case 5:{cout<<"?????????????"<<endl;cin>>add;abs->person[t].address=add;break;}
            case 0:return;break;
            default :cout<<"??????????????"<<endl;break;
        }
    }   
}
void xglxr(addressbook *abs)//�޸���ϵ�˹���
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
        cout<<"��???????????????"<<endl;
    }
        system("pause");
        system("cls");
}
void shownemu() //��ҳ�溯��
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
void qklxr(addressbook *abs)//�����ϵ�˹���ʵ��
{
    abs->msize=0;
    system("pause");
    system("cls");
}
int main()//������
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
        default :cout<<"??????????????��???"<<endl;shownemu();break;
    }
    }
    system("pause");
}