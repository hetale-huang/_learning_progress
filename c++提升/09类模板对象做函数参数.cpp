//#include<iostream>
//using namespace std;
//
////类模板对象做函数参数
//template<class T1,class T2>
//class person
//{
//public:
//	person(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age; 
//	}
//
//	void showperson()
//	{
//		cout << "姓名：" << this->m_name << "年龄：" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
//
////1.指定传入类型  最常用的
//void printperson1(person<string, int>& p)
//{
//	p.showperson();
//}
//
//void test01()
//{
//	person<string, int>p("孙悟空", 100);
//
//	printperson1(p);
//}
////2.参数模板化
//template<class T1,class T2>
//void printperson2(person<T1, T2>& p)
//{
//	p.showperson();
//	cout << "T1的类型为：" << typeid(T1).name() << endl;
//	cout << "T2的类型为：" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	person<string, int>p("猪八戒", 90);
//	printperson2(p);
//	
//}
//
////3.整个类模板化
//template<class T>
//void printperson3(T &p)
//{
//	p.showperson();
//	cout << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	person<string, int>p("唐僧", 30);
//	printperson3(p);
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}