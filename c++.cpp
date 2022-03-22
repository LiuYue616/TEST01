#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
const double pi=3.1415926;
using namespace std;
class student//学生类
{
    public://公共权限
    string name;long id;//定义姓名学号
    void set(){cin>>name;cin>>id;};//输入学生姓名学号
    void out(){cout<<name<<"\t"<<id<<endl;};//输出学生姓名和学号
};
class person//人类
{   
    protected://保护权限
    string name;//可读可写
    int age;//可读可写
    long id=14555677;//只读
    long m_id;//只写
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
class cube//立方体类
{
    protected://保护权限
    int l,w,h;
    public://公共权限
    void set()//输入长宽高
    {
        cin>>l;cin>>w;cin>>h;
    }
    int get_l()//获得长宽高
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
    void scube()//输出面积
    {
        cout<<(l*w+w*h+l*h)*2<<endl;
    }
    void vcube()//输出体积
    {
        cout<<l*w*h<<endl;
    }
    bool issamebyclasee(cube &c)//成员函数判断两个立方体是否相等
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
bool issame(cube &c1,cube &c2)//全局函数判断两个立方体是否相等
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
class point//点类
{
    private:
    int x,y;
    public:
    void set()//设置下x，y
    {
        cin>>x;
        cin>>y;
    }
    int outx()//获取x
    {
        return x;
    }
    int outy()//获取y
    {
        return y;
    }
};
class circle//园类
{
    private:
    int r;//半径
    point c_center;//圆心
    public:
    void setr()//设置半径
    {
        cin>>r;
    }
    void setcenter()//设置圆心
    {
        c_center.set();
    }
    int outr()//获得半径
    {
        return r;
    }
    point outcenter()//获得圆心
    {
        return c_center;
    }

};
void isincircle(circle &c,point &d)//判断点与园的未知关系
{
    int a,b;
    a=(d.outx()-c.outcenter().outx())*(d.outx()-c.outcenter().outx());
    b=(d.outy()-c.outcenter().outy())*(d.outy()-c.outcenter().outy())+a;
    a=c.outr();
    if(a==sqrt(b))
    {
        cout<<"点在园上"<<endl;
        return;
    }
    else if(a>sqrt(b))
    {
        cout<<"点在园内"<<endl;
        return;
    }
    else
    {
        cout<<"点在园外"<<endl;
        return;
    }
}
int main()
{
    circle *p=new circle;
    circle c1;
    point p;
    cout<<"请输入园的半径"<<endl;
    c1.setr();
    cout<<"请输入圆心的坐标，用空格隔开"<<endl;
    c1.setcenter();
    cout<<"请输入点的坐标，用空格隔开"<<endl;
    p.set();
    isincircle(c1,p);
    system("pause");
    system("cls");
}