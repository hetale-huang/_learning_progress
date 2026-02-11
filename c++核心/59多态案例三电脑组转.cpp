//#include<iostream>
//#include<string>
//using namespace std;
//
////抽象不同零件类
////抽象cpu类
//class CPU
//{
//public:
//	//抽象计算函数
//	virtual void calculate() = 0;
//};
////抽象显卡类
//class VideoCard
//{
//public:
//	//抽象显示函数
//	virtual void display() = 0;
//};
////抽象内存条类
//class Memory
//{
//public:
//	//抽象的存储函数
//	virtual void storage() = 0;
//};
//
////电脑类
//class computer
//{
//public:
//	computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//提供工作函数
//	void work()
//	{
//		//让零件工作起来，调用接口
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//
//	//提供析构函数 释放三个电脑零件
//	~computer()
//	{
//		if (m_cpu != NULL)//CPU
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc != NULL)//显卡零件指针
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_mem != NULL)//释放内存条零件
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	CPU* m_cpu;//cpu的零件指针
//	VideoCard* m_vc;//显卡零件指针
//	Memory* m_mem;//内存条零件指针
//};
//
////具体厂商
////Intel厂商
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel的CPU开始计算了！" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel的显卡开始显示了！" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel的内存开始储存了！" << endl;
//	}
//};
//
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo的CPU开始计算了！" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo的显卡开始显示了！" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo的内存开始储存了！" << endl;
//	}
//};
//
//void test01()
//{
//	//第一台电脑零件
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//	//创建第一台电脑
//	cout << "-------------------------------" << endl;
//	cout << "第一台电脑开始工作：" << endl;
//	computer* computer1 = new computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;//电脑释放了，但是电脑的零件还没释放
//	//一种就是提供析构函数
//	//另一种就是单独写出来释放delete等；
//
//	//第二台电脑组装
//	cout << "-------------------------------" << endl;
//	cout << "第二台电脑开始工作：" << endl;
//	computer* computer2 = new computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->work();
//	delete computer2;
//
//	//第三台电脑组装
//	cout << "-------------------------------" << endl;
//	cout << "第三台电脑开始工作：" << endl;
//	computer* computer3 = new computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
//	computer3->work();
//	delete computer3;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}