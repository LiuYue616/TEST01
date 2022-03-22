#include<iostream>
#include<string>
using namespace std;

struct Student
{
    string m_name;
    int m_age;
    Student *next;
};

Student* CreatList(int n)
{
    Student *head;
    Student *temp=head;
    for(int i=0;i<n;i++)
    {
        Student *p=new Student;
        cout<<"请分别输入第"<<i+1<<"个学生姓名和学生年龄:"<<endl;
        cin>>p->m_name;
        cin>>p->m_age;
        temp->next=p;
        temp=p;
        p->next=NULL;
    }
    return head;
}

void display(Student *head,int num)
{
    Student *p=head->next;
    for(int i=0;i<num;i++)
    {
        cout<<"第"<<i+1<<"个学生的姓名:"<<p->m_name<<"\n\t年龄:"<<p->m_age<<endl;
        p=p->next;
    }
}

void test01()
{
    int num;
    cout<<"请输入想要输入学生的数目:"<<endl;
    cin>>num;
    display(CreatList(num),num);
}

int main()
{
    test01();
    return 0;
}