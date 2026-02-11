//#include<iostream>
//using namespace std;
//#include<string>
////通过全局函数 打印person信息
//
////提前让编译器知道person类的存在；
//template<class T1,class T2>
//class person;
//
////类外实现
//template<class T1, class T2>
//void printperson2(person<T1, T2>p)
//{
//	cout << "类外实现------姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class person
//{
//	//全局函数 类内实现
//
//	friend void printperson(person<T1, T2>p)
//	{
//		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//	}
//
//	//全局函数 类外实现
//	//加空模板参数列表
//	//如果全局函数 是类外实现，需要让编译器提前知道这个函数的存在；
//
//	//放在前面
//	friend void printperson2<>(person<T1, T2>p);
//
//
//public:
//	person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
////1.全局函数在类内实现
//void test01()
//{
//	person<string, int>p("tom", 20);
//
//	printperson(p);
//}
//
////2.全局函数在类外实现
//void test02()
//{
//	person<string, int>p("jerry", 20);
//
//	printperson2(p);
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}