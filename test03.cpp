//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//void  test()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "���ļ�ʧ��" << endl;
//		return;
//	}
//	/*char string[1024] = { 0 };��һ�ֶ�ȡ���ݷ�ʽ
//	while (ifs >> string)
//	{
//		cout << string << endl;
//	}*/
//	/*char string[1024] = { 0 };�ڶ��ֶ�ȡ���ݷ�ʽ
//	while (ifs.getline(string, sizeof(string)))
//	{
//		cout << string << endl;
//	}*/
//	/*string buf;               �����ֶ�ȡ���ݷ�ʽ
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/  
//	/*char c;                   �����ֶ�ȡ���ݷ�ʽ
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c << endl;
//	}*/
//	ifs.close();
//}
//class person
//{
//public:
//	char name[64];
//	int age;
//};
//void test01()
//{
//	/*ofstream ofs;
//	ofs.open("test.txt", ios::out | ios::binary);
//	person p = { "����",20 };
//	ofs.write((const char*)&p, sizeof(person));
//	ofs*/
//	ifstream ifs;
//	ifs.open("test.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ȡ����" << endl;
//		return;
//	}
//	person d;
//	ifs.read((char*)&d, sizeof(person));
//	cout << d.name << endl << d.age << endl;
//	ifs.close();
//}
//int main()
//{
//	test01();
//}