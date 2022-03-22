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
	while (n != 1 && n != 2 && n != 0)
	{
		cout << "输入错误的选项，请重新输入!" << endl;
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
	cout<<"请输入一个4位数字例如1 2 3 4"<<endl;
	while (1)
	{
		if (w == 0) { lose(a); break; }
		if (y == 0) cout << "可用的次数还剩：" << w << "次" << endl;
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