//#include <iostream>
//using namespace std;
//
//
//struct Linked
//{
//    /********* Begin *********/
//    //�ṹ��ĳ�Ա����
//    int num;
//    float sc;
//    Linked* next;
//    /********* End *********/
//};
//Linked* Create()
//{
//    /********* Begin *********/
//    //����������һ��������
//    Linked* p = new Linked;
//    p->next = NULL;
//    return p;
//    /********* End *********/
//}
//void InsertAfter(Linked* node, int num, float sc)
//{
//    /********* Begin *********/
//    //��ָ���ڵ�����һ���½ڵ㣬������ num��sc ����ָ��
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
//    //ɾ���˽ڵ�֮���һ���ڵ�
//    node->next = node->next->next;
//    /********* End *********/
//}
//Linked* GetByIndex(Linked* head, int index)
//{
//    /********* Begin *********/
//    //����ָ���������Ľڵ�
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
//    //����ʽ��ӡ�����������нڵ�ĳ�Ա����
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
//	cout << "������Ҫ���ҳ��ִ����ķ������������Ҫ������0" << endl;
//	while (1)
//	{
//		cin >> k;
//		if (k == 0) break;
//		p = count(s, s + 10, k);
//		cout << "�÷��������ˣ�" << p << "��" << endl;
//	}
//	int m;
//	m = count_if(s, s + 10, lowerthan60);
//	cout << "�����������Ϊ��" << m << "��" << endl;
//	double *q, *w;
//	q = max_element(s, s + 10);
//	w = min_element(s, s + 10);
//	cout << "�óɼ�����߷�Ϊ��" << *q << endl;
//	cout << "�óɼ�����ͷ�Ϊ��" << *w << endl;
//	return 0;
//}
#include<iostream>
#include<ctime>
using namespace std;
void showmenu()
{
	cout << "**********************************************" << endl;
	cout << "*****************������С��Ϸ*****************" << endl;
	cout << "******************1.��ʼ��Ϸ******************" << endl;
	cout << "******************0.�˳���Ϸ******************" << endl;
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
		cout << "������ͬ�ĸ�����" << n << "��" << endl;
		cout << "����˳����ͬ����" << m << "��" << endl;
		return 0;
	}
}
void win()
{
	cout << "��ϲ������ʤ����" << endl;
	system("pause");
	system("cls");
}
void lose(int a[])
{
	cout << "�ܿ�ϧ�㲢û�в³�����" << endl;
	cout << "��ȷ���ǣ�" << endl;;
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
	cout << "1.���Ѷȣ���4λ���֣��������ޣ�" << endl;
	cout << "2.��ͨ�Ѷȣ���4λ���֣�����10�Σ�" << endl;
	cout << "0.�������˵�" << endl;
	cin >> n;
	while (n != 1 && n != 2&&n!=0)
	{
		cout << "��������ѡ�����������!" << endl;
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
		if (y == 0) cout << "���õĴ�����ʣ��" << w << "��" << endl;
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