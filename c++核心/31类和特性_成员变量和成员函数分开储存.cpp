//#include"swap.h"
//
////成员变量和成员函数分开储存的
//class person
//{
//public:
//	int m_A;//非静态 属于类的对象上
//
//	static int m_B;//静态 不属于类的对象上
//
//	void func() {};//非静态函数，分开存储的，也是不属于类的对象；
//
//	static void func2() {};//静态函数，也是不属于类的对象，也是分开存储的
//};
//int person::m_B=100;
//
//void test01()
//{
//	//空对象占用内存空间为：1
//	//c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	//就是每个空对象也应该有一个独一无二的内存地址；
//	person p;
//	cout << "size of p=" << sizeof(p) << endl;
//}
//
//void test02()
//{
//	person p;
//	cout << "size of p=" << sizeof(p) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}