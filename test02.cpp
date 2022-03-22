//#include <iostream>
//using namespace std;
//
//
//struct Linked
//{
//    /********* Begin *********/
//    //结构体的成员变量
//    int num;
//    float sc;
//    Linked* next;
//    /********* End *********/
//};
//Linked* Create()
//{
//    /********* Begin *********/
//    //创建并返回一个新链表
//    Linked* p = new Linked;
//    p->next = NULL;
//    return p;
//    /********* End *********/
//}
//void InsertAfter(Linked* node, int num, float sc)
//{
//    /********* Begin *********/
//    //在指定节点后插入一个新节点，内容由 num，sc 参数指定
//    Linked* l = Create();
//    l->next = node->next;
//    node->next = l;
//    l->num = num;
//    l->sc = sc;
//    /********* End *********/
//}
//void DeleteAfter(Linked* node)
//{
//    /********* Begin *********/
//    //删除此节点之后的一个节点
//    node->next = node->next->next;
//    /********* End *********/
//}
//Linked* GetByIndex(Linked* head, int index)
//{
//    /********* Begin *********/
//    //返回指定索引处的节点
//    if (head->next == NULL)
//    {
//        Linked* p = Create();
//        head->next = p;
//        return p;
//    }
//    Linked* j = head->next;
//    for (int i = 0; i < index; i++)
//    {
//        j = j->next;
//    }
//    return j;
//    /********* End *********/
//}
//void PrintAll(Linked* head)
//{
//    /********* Begin *********/
//    //按格式打印此链表中所有节点的成员变量
//    Linked* p = head->next;
//    while (p)
//    {
//        cout << p->num << " " << p->sc << endl;
//        p = p->next;
//    }
//    /********* End *********/
//}
////int main()
////{
////    int num;
////    float score;
////    cin >> num >> score;
////    Linked* lk = Create();
////    InsertAfter(lk, num, score);
////    cin >> num >> score;
////    InsertAfter(GetByIndex(lk, 0), num, score);
////    cin >> num >> score;
////    InsertAfter(GetByIndex(lk, 1), num, score);
////    DeleteAfter(GetByIndex(lk, 0));
////    PrintAll(lk);
////}
//
//
//#include<iostream>
//#include<algorithm>
//#include<functional>
//#include<ctime>
//using namespace std;
//#define N 100
//double s[N];
//void print(double d)
//{
//	cout << d << "\t";
//}
//bool lowerthan60(double sco)
//{
//	return sco < 60;
//}
//int main()
//{
//	srand((unsigned)int(NULL));
//	for (int i = 0; i < N; ++i)
//	{
//		s[i] = rand() % 100;
//	}
//	for_each(s, s + N, print);
//	double k=0;
//	int p=0;
//	cout << "请输入要查找出现次数的分数，如果不需要请输入0" << endl;
//	while (1)
//	{
//		cin >> k;
//		if (k == 0) break;
//		p = count(s, s + 10, k);
//		cout << "该分数出现了：" << p << "次" << endl;
//	}
//	int m;
//	m = count_if(s, s + 10, lowerthan60);
//	cout << "不及格的人数为：" << m << "人" << endl;
//	double *q, *w;
//	q = max_element(s, s + 10);
//	w = min_element(s, s + 10);
//	cout << "该成绩中最高分为：" << *q << endl;
//	cout << "该成绩中最低分为：" << *w << endl;
//	return 0;
//}
#include<iostream>
#include<ctime>
using namespace std;
void showmenu()
{
	cout << "**********************************************" << endl;
	cout << "*****************猜数字小游戏*****************" << endl;
	cout << "******************1.开始游戏******************" << endl;
	cout << "******************0.退出游戏******************" << endl;
	cout << "**********************************************" << endl;
}bool judge(int a[], int b[])
{
	int m=0, n=0;
	for (int i = 0; i < 4; ++i)
	{
		if (a[i] == b[i]) ++m;
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (b[i] == a[j]) { ++n; break; }
		}
	}
	if (m == 4 && n == 4) return 1;
	else 
	{
		cout << "数字相同的个数有" << n << "个" << endl;
		cout << "数字顺序相同的有" << m << "个" << endl;
		return 0;
	}
}
void win()
{
	cout << "恭喜你获得了胜利！" << endl;
	system("pause");
	system("cls");
}
void lose(int a[])
{
	cout << "很可惜你并没有猜出来！" << endl;
	cout << "正确答案是：" << endl;;
	for (int i = 0; i < 4; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
	system("cls");
}
void game_start()
{
	srand((unsigned)time(0));	
	int n;
	cout << "1.简单难度（猜4位数字，次数无限）" << endl;
	cout << "2.普通难度（猜4位数字，次数10次）" << endl;
	cout << "0.返回主菜单" << endl;
	cin >> n;
	while (n != 1 && n != 2&&n!=0)
	{
		cout << "输入错误的选项，请重新输入!" << endl;
		cin >> n;
	}
	static int p;
    switch (n)
	{
	case 1: {p = 1; break; }
	case 2: {p = 0; break; }
	case 0: {system("cls"); return; break; }
    }
	int a[4],b[4];
	for (int i = 0; i < 4; ++i)
	{
		a[i] = rand() % 10;
	}
	cout << "Game Start" << endl;
	bool x = false;
	bool y = 1;
	int w = 10;
	if (p == 0) { y = 0;}
	while (1)
	{
		if (y == 0) cout << "可用的次数还剩：" << w << "次" << endl;
		for (int j = 0; j < 4; ++j)
		{
			cin >> b[j];
		}
		x=judge(a, b);
		if (x == 1) { win(); break; }
		if (w == 0) { lose(a); break; }
		if(y==0) --w;
	}
}
//int main()
//{
//	int k = 0;
//	while (1)
//	{
//		showmenu();
//		cin >> k;
//		switch (k)
//		{
//		case 1:game_start(); break;
//		case 0:return 0; break;
//		default:system("cls"); break;
//		}
//	}
//}