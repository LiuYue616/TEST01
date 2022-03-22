#include <iostream>
using namespace std;
class List{
protected:
    int size;
public:
    //兼具默认构造函数和功能构造函数
    List(int s=0):size(s){}
    //拷贝构造函数
    List(const List&rhs):size(rhs.size){}
    //取函数，从此以后不再提供存函数
    int getSize()const{return size;}
};
class ArrayList : public List{
private:
    int *data;   //真正保存数据的地方
    int capacity;//容量
public:
    //默认构造函数，构造一个逻辑为空的顺序表
    ArrayList();
    //拷贝构造函数，构造一个逻辑上与参数内容相同的顺序表
    ArrayList(const ArrayList&rhs);
    //原生数组构造函数，构造一个内容与给定数组相同的顺序表
    ArrayList(int const a[],int n);
    //填充构造函数，构造一个内容为n个value的顺序表
    ArrayList(int n,int value);
    //析构函数，一定要自行实现，否则有内存泄漏
    ~ArrayList();
};
ArrayList::ArrayList()
{
    data=nullptr;
    capacity=0;
}
ArrayList::ArrayList(const ArrayList&rhs)
{
    size=rhs.getSize();
    capacity=rhs.capacity;
    data=rhs.data;
}
ArrayList::ArrayList(int const a[],int n)
{
    size=n;
    capacity=n;
    int* const head=new int[n];
    data=head;
    for(int i=0;i<n;++i)
    {
        *data=a[i];
        ++data;
    }
    data=head;
}
ArrayList::ArrayList(int n,int value)
{
    size=n;
    capacity=n;
    int* const head=new int[n];
    data=head;
    for(int i=0;i<n;++i)
    {
        *data=value;
        ++data;
    }
    data=head;
}
ArrayList::~ArrayList()
{
    size=0;
    capacity=0;
    delete data;
}

class LinkedList : public List{
public:
    //这是单链表节点的结构体
    struct Node{
        int data;
        Node *next;
        Node(int a=0,Node *b=nullptr):data(a),next(b){}
    };
private:
    Node *head;//链表的头结点
public:
    //默认构造函数，构造一个逻辑为空的链表
    LinkedList();
    //拷贝构造函数，构造一个逻辑上与参数内容相同的链表
    LinkedList(const LinkedList&rhs);
    //原生数组构造函数，构造一个内容与给定数组相同的链表
    LinkedList(int const a[],int n);
    //填充构造函数，构造一个内容为n个value的链表
    LinkedList(int n,int value);
    //析构函数，一定要自行实现，否则有内存泄漏
    ~LinkedList();
};
LinkedList::LinkedList()
{
    size=0;
    head=nullptr;
}
LinkedList::LinkedList(const LinkedList&rhs)
{
    size=rhs.getSize();
    head=rhs.head;
}
LinkedList::LinkedList(int const a[],int n)
{
    size=n;
    head=new Node;
    Node *p=new Node;
    p=head->next;
    for(int i=0;i<n;++i)
    {
        p->data=a[i];
        p->next=new Node;
        p=p->next;
    }
}
LinkedList::LinkedList(int n,int value)
{
        size=n;
    head=new Node;
    Node *p=new Node;
    p=head->next;
    for(int i=0;i<n;++i)
    {
        p->data=value;
        p->next=new Node;
        p=p->next;
    }
}
LinkedList::~LinkedList()
{
    if(head->next!=nullptr)
    {
        delete head;
        head=head->next;
    }
}
int const A[] = {100,200,300};
int main()
{
    List a;
    ArrayList b(A,3),c(4,9);
    ArrayList d(c);
    LinkedList e(A,3),f(4,9);
    LinkedList g(f);
    cout<<a.getSize()
        <<b.getSize()<<c.getSize()<<d.getSize()
        <<e.getSize()<<f.getSize()<<g.getSize()
        <<endl;
    return 0;
}
