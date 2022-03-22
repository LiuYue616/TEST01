
#pragma once
#include<iostream>
#include"Library.h"
#include"Reader.h"
#include<fstream>
#define LFileName "library.txt"
class Admin
{
public:
	Library** L;
	int L_size;


	void Meau()							//菜单
	{
		cout << "************************" << endl;
		cout << "欢迎使用图书信息管理系统" << endl;
		cout << "请按功能输入相对应的数字" << endl;
		cout << "1.添加图书" << endl;
		cout << "2.管理图书信息" << endl;
		cout << "3.添加读者信息" << endl;
		cout << "4.管理读者信息" << endl;
		cout << "5.借阅图书" << endl;
		cout << "6.借阅信息变更" << endl;
		cout << "7.退出系统" << endl;
		cout << "************************" << endl;
	}

	void get_L_size()				//获取图书信息的数量
	{
		ifstream ifs;
		ifs.open(LFileName, ios::in);
		string Name;
		string ISBN;
		int Number;
		string Author;
		string Press;
		string PublishTime;
		int Edition;
		double Price;
		int Amount;
		this->L_size = 0;
		while (ifs >> Name >> ISBN >> Number >> Author >> Press >> PublishTime >> Edition >> Price >> Amount)
		{
			L_size++;
		}
		ifs.close();
	}

	Admin()
	{
		ifstream ifs;
		ifs.open(LFileName, ios::in);
		if (!ifs.is_open())
		{
			cout << "文件打开失败" << endl;
			this->L_size = 0;
			L = nullptr;
			return;
		}
		/*get_L_size();
		string Name;
		string ISBN;
		int Number;
		string Author;
		string Press;
		string PublishTime;
		int Edition;
		double Price;
		int Amount;
		L = new Library * [L_size];
		int i = 0;
		while (ifs >> Name >> ISBN >> Number >> Author >> Press >> PublishTime >> Edition >> Price >> Amount)
		{
			Library* book = new Library(Name, ISBN, Number, Author, Press, PublishTime, Edition, Price, Amount);
			L[i] = book;
			i++;
		}
		ifs.close();*/
	}

	void AddBook()
	{
		cout << "请依次输入想要添加图书的信息" << endl;
		Library** new_space = new Library * [++L_size];
		cout << "书名:" << endl; string name; cin >> name;
		cout << "ISBN:" << endl; string isbn; cin >> isbn;
		cout << "图书编号:" << endl; int number; cin >> number;
		cout << "作者姓名:" << endl; string autuor_name; cin >> autuor_name;
		cout << "出版社名称:" << endl; string press_name; cin >> press_name;
		cout << "出版时间:" << endl; string publish_time; cin >> publish_time;
		cout << "版次:" << endl; int edition_num; cin >> edition_num;
		cout << "图书价格:" << endl; int book_value; cin >> book_value;
		cout << "图书数量:" << endl; int book_num; cin >> book_num;
		Library* new_book = new Library(name, isbn, number, autuor_name, press_name, publish_time, edition_num, book_value, book_num);
		new_space[L_size - 1] = new_book;
		L = new_space;
		cout << "添加成功！！！" << endl;
		ofstream ofs;
		ofs.open(LFileName, ios::out);
		for (int i = 0; i < L_size; i++)
		{
			ofs << L[i]->Name << " " << L[i]->ISBN << " " << L[i]->Number << " " << L[i]->Author << " " << L[i]->Press << " " << L[i]->PublishTime << " " << L[i]->Edition << " " << L[i]->Price << " " << L[i]->Amount << endl;
		}
		ofs.close();
	}

};