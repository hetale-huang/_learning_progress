//#include"swap.h"
//
////静态成员函数
////所有对象共享同一个函数
////静态成员函数只能访问静态成员变量
//class person
//{
//public:
//	//静态成员函数
//	static void func()
//	{
//		m_A = 100;//静态成员函数可以访问 静态成员变量
//		//m_B = 200; //静态成员函数 不可以访问 非静态的成员变量
//		cout << "static void func调用"<<m_A << endl;
//	}
//	static int m_A; //静态成员变量
//	int m_B;//因为必须要创建一个对象，所以不能访问m_B；
//};
//
//int person::m_A = 0;
//
//void test01()
//{
//	//1.通过对象访问
//	person p;
//	p.func();
//	//通过类名访问
//	person::func();
//}
////私有的静态函数访问不到
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}