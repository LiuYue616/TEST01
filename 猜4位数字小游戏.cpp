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
	while (n != 1 && n != 2 && n != 0)
	{
		cout << "��������ѡ�����������!" << endl;
		cin >> n;
	}
	static int p;
    switch (n)
	{
	case 1: {p = 1; break; }
    case 2: {p = 0; break; }
	case 0:{system("cls"); return; break; }
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
	cout<<"������һ��4λ��������1 2 3 4"<<endl;
	while (1)
	{
		if (w == 0) { lose(a); break; }
		if (y == 0) cout << "���õĴ�����ʣ��" << w << "��" << endl;
		for (int j = 0; j < 4; ++j)
		{
			cin >> b[j];
		}
		x=judge(a, b);
		if (x == 1) { win(); break; }
		if(y==0) --w;
	}
}
int main()
{
	int k = 0;
	while (1)
	{
		showmenu();
		cin >> k;
		switch (k)
		{
		case 1:game_start(); break;
		case 0:return 0; break;
		default:system("cls"); break;
		}
	}
}