#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
const double pi=3.1415926;
using namespace std;
class student//ѧ����
{
    public://����Ȩ��
    string name;long id;//��������ѧ��
    void set(){cin>>name;cin>>id;};//����ѧ������ѧ��
    void out(){cout<<name<<"\t"<<id<<endl;};//���ѧ��������ѧ��
};
class person//����
{   
    protected://����Ȩ��
    string name;//�ɶ���д
    int age;//�ɶ���д
    long id=14555677;//ֻ��
    long m_id;//ֻд
    public:
    void setname(string inname)
    {
        name=inname;
        cout<<name<<endl;
    }
    void setage(int inage)
    {
        age=inage;
        cout<<age<<endl;
    }
    void outid()
    {
        cout<<id<<endl;
    }
    void setm_id(long seid)
    {
        m_id=seid;
    }
};
class cube//��������
{
    protected://����Ȩ��
    int l,w,h;
    public://����Ȩ��
    void set()//���볤���
    {
        cin>>l;cin>>w;cin>>h;
    }
    int get_l()//��ó����
    {
        return l;
    }
    int get_w()
    {
        return w;
    }
    int get_h()
    {
        return h;
    }
    void scube()//������
    {
        cout<<(l*w+w*h+l*h)*2<<endl;
    }
    void vcube()//������
    {
        cout<<l*w*h<<endl;
    }
    bool issamebyclasee(cube &c)//��Ա�����ж������������Ƿ����
    {
         if(c.get_h()==h&&c.get_l()==l&&c.get_w()==w)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
};
bool issame(cube &c1,cube &c2)//ȫ�ֺ����ж������������Ƿ����
{
    if(c1.get_h()==c2.get_h()&&c1.get_l()==c2.get_l()&&c1.get_w()==c2.get_w())
    {
        return true;
    }
    else
    {
        return false;
    }
}
class point//����
{
    private:
    int x,y;
    public:
    void set()//������x��y
    {
        cin>>x;
        cin>>y;
    }
    int outx()//��ȡx
    {
        return x;
    }
    int outy()//��ȡy
    {
        return y;
    }
};
class circle//԰��
{
    private:
    int r;//�뾶
    point c_center;//Բ��
    public:
    void setr()//���ð뾶
    {
        cin>>r;
    }
    void setcenter()//����Բ��
    {
        c_center.set();
    }
    int outr()//��ð뾶
    {
        return r;
    }
    point outcenter()//���Բ��
    {
        return c_center;
    }

};
void isincircle(circle &c,point &d)//�жϵ���԰��δ֪��ϵ
{
    int a,b;
    a=(d.outx()-c.outcenter().outx())*(d.outx()-c.outcenter().outx());
    b=(d.outy()-c.outcenter().outy())*(d.outy()-c.outcenter().outy())+a;
    a=c.outr();
    if(a==sqrt(b))
    {
        cout<<"����԰��"<<endl;
        return;
    }
    else if(a>sqrt(b))
    {
        cout<<"����԰��"<<endl;
        return;
    }
    else
    {
        cout<<"����԰��"<<endl;
        return;
    }
}
int main()
{
    circle *p=new circle;
    circle c1;
    point p;
    cout<<"������԰�İ뾶"<<endl;
    c1.setr();
    cout<<"������Բ�ĵ����꣬�ÿո����"<<endl;
    c1.setcenter();
    cout<<"�����������꣬�ÿո����"<<endl;
    p.set();
    isincircle(c1,p);
    system("pause");
    system("cls");
}