//#include<iostream>
//using namespace std;
//class cpu
//{
//public:
//	virtual void cal() = 0;
//};
//class gpu
//{
//public:
//	virtual void display() = 0;
//};
//class ram
//{
//public:
//	virtual void storage() = 0;
//};
//class intercpu :public cpu
//{
//public:
//	virtual void cal()
//	{
//		cout << "inter-i7-7700k" << endl;
//	}
//};
//class amdcpu :public cpu
//{
//public:
//	virtual void cal()
//	{
//		cout << "amd-5600x" << endl;
//	}
//};
//class nvidiagpu :public gpu
//{
//public:
//	virtual void display()
//	{
//		cout << "rtx-2060" << endl;
//	}
//};
//class amdgpu :public gpu
//{
//public:
//	virtual void display()
//	{
//		cout << "amd-rt6800xt" << endl;
//	}
//};
//class hdcram :public ram
//{
//public:
//	virtual void storage()
//	{
//		cout << "8gb-3600Mhz" << endl;
//	}
//};
//class jstram :public ram
//{
//public:
//	virtual void storage()
//	{
//		cout << "8gb-3200Mhz" << endl;
//	}
//};
//class computer
//{
//public:
//	computer(cpu*j,gpu*k,ram*l)
//	{
//		cpu = j;
//		gpu = k;
//		ram = l;
//	}
//	void dowork()
//	{
//		cpu->cal();
//		gpu->display();
//		ram->storage();
//	}
//	~computer()
//	{
//		if (cpu != NULL)
//		{
//			delete cpu;
//			cpu = NULL;
//		}
//		if (gpu != NULL)
//		{
//			delete gpu;
//			gpu = NULL;
//		}
//		if (ram != NULL)
//		{
//			delete ram;
//			ram = NULL;
//		}
//	}
//private:
//	cpu* cpu;
//	gpu* gpu;
//	ram* ram;
//};
//void test01()
//{
//	cpu* cpu1 = new intercpu;
//	gpu* gpu1 = new nvidiagpu;
//	ram* ram1 = new hdcram;
//	computer* p = new computer(cpu1, gpu1, ram1);
//	p->dowork();
//	delete p;
//	p = NULL;
//}
//int main()
//{
//	test01();
//}