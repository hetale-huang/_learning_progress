//#include"swap.h"
//using namespace std;
//
////类模板中成员函数创建时机
////类模板中在成员函数调用时才去创建
//class person1
//{
//public:
//	void showperson1()
//	{
//		cout << "person1 show" << endl;
//	}
//};
//
//class person2
//{
//public:
//	void showperson2()
//	{
//		cout << "person2 show" << endl;
//	}
//};
//
//template<class T>
//class Myclass
//{
//public:
//	T obj;
//
//	//类模板中的成员函数
//	void func1()
//	{
//		obj.showperson1();
//	}
//	void func2()
//	{
//		obj.showperson2();
//	}
//};
//
//
//
//void test01()
//{
//	Myclass<person2>m;
//	m.func1();
//	//m.func2();
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}