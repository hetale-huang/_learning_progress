//#include"swap.h"
////静态成员变量
//class person
//{
//public:
//	//所有变量都共享一份数据；
//	//编译阶段就进行了内存的分配；
//	//类内进行声明，类外进行初始化操作；
//	static int m_A;
//	
//private:
//	static int m_B;
//};
//
//int person::m_A = 100;
//int person::m_B = 100;
//
//void test01()
//{
//	person p;
//	cout << p.m_A << endl;
//
//	person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;//说明这个数据是大家共享的一个数据；
//}
//
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//
//	//1.通过对象进行访问
//
//	//person p;
//	//cout << p.m_A << endl;
//
//	//2.通过类名进行访问
//	cout << person::m_A << endl;
//	//cout << person::m_B << endl; 类外访问不到私有静态成员变量；
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}