#include <iostream>
using namespace std;

/********* Begin *********/
class Chinese
{
	//人类的声明
public:
	virtual void greet()
	{
		cout << "你好" << endl;
	}
};
//人类的定义




class EnglishLearner : public Chinese
{
	//英语学生类的声明
public:
	 void greet()
	{
		cout << "Hello" << endl;
	}
};
//英语学生类的定义





class Repeater : public Chinese
{
	//复读机类的声明
public:
	void greet()
	{
		cout << "你好" << endl;
	}
};
//复读机类的定义



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