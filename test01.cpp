#include <iostream>
using namespace std;

/********* Begin *********/
class Chinese
{
	//���������
public:
	virtual void greet()
	{
		cout << "���" << endl;
	}
};
//����Ķ���




class EnglishLearner : public Chinese
{
	//Ӣ��ѧ���������
public:
	 void greet()
	{
		cout << "Hello" << endl;
	}
};
//Ӣ��ѧ����Ķ���





class Repeater : public Chinese
{
	//�������������
public:
	void greet()
	{
		cout << "���" << endl;
	}
};
//��������Ķ���



/********* End *********/

//int main()
//{
//	Chinese ce;
//	EnglishLearner le;
//	Repeater re;
//	ce.greet();
//	le.greet();
//	re.greet();
//}