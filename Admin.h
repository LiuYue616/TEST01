
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


	void Meau()							//�˵�
	{
		cout << "************************" << endl;
		cout << "��ӭʹ��ͼ����Ϣ����ϵͳ" << endl;
		cout << "�밴�����������Ӧ������" << endl;
		cout << "1.���ͼ��" << endl;
		cout << "2.����ͼ����Ϣ" << endl;
		cout << "3.��Ӷ�����Ϣ" << endl;
		cout << "4.���������Ϣ" << endl;
		cout << "5.����ͼ��" << endl;
		cout << "6.������Ϣ���" << endl;
		cout << "7.�˳�ϵͳ" << endl;
		cout << "************************" << endl;
	}

	void get_L_size()				//��ȡͼ����Ϣ������
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
			cout << "�ļ���ʧ��" << endl;
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
		cout << "������������Ҫ���ͼ�����Ϣ" << endl;
		Library** new_space = new Library * [++L_size];
		cout << "����:" << endl; string name; cin >> name;
		cout << "ISBN:" << endl; string isbn; cin >> isbn;
		cout << "ͼ����:" << endl; int number; cin >> number;
		cout << "��������:" << endl; string autuor_name; cin >> autuor_name;
		cout << "����������:" << endl; string press_name; cin >> press_name;
		cout << "����ʱ��:" << endl; string publish_time; cin >> publish_time;
		cout << "���:" << endl; int edition_num; cin >> edition_num;
		cout << "ͼ��۸�:" << endl; int book_value; cin >> book_value;
		cout << "ͼ������:" << endl; int book_num; cin >> book_num;
		Library* new_book = new Library(name, isbn, number, autuor_name, press_name, publish_time, edition_num, book_value, book_num);
		new_space[L_size - 1] = new_book;
		L = new_space;
		cout << "��ӳɹ�������" << endl;
		ofstream ofs;
		ofs.open(LFileName, ios::out);
		for (int i = 0; i < L_size; i++)
		{
			ofs << L[i]->Name << " " << L[i]->ISBN << " " << L[i]->Number << " " << L[i]->Author << " " << L[i]->Press << " " << L[i]->PublishTime << " " << L[i]->Edition << " " << L[i]->Price << " " << L[i]->Amount << endl;
		}
		ofs.close();
	}

};