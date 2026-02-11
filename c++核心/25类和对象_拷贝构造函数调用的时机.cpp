//#include<iostream>
//using namespace std;
//
////拷贝构造函数调用时机
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//
////2.值传递的方式给函数参数传值
//
////3.值方式返回局部对象？这是啥
//
//class person
//{
//public:
//	person()//默认构造函数
//	{
//		cout << "person默认构造函数调用" << endl;
//	}
//	person(int age)//有参构造函数
//	{
//		cout << "person有惨构造函数调用" << endl;
//		m_Age = age;
//	}
//	person(const person & p)//拷贝函数
//	{
//		cout << "person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//	~person()//析构函数
//	{
//		cout << "person析构函数调用" << endl;
//	}
//
//	int m_Age;
//
//};
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//
//void test01()
//{
//	person p1(20);//有参
//	person p2(p1);//拷贝
//
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
//
////2.值传递的方式给函数参数传值
//void dowork(person p)
//{
//
//}
//
//void test02()
//{
//	person p;
//	dowork(p); //拷贝一个新的p，值传递，所以自动调用拷贝函数
//
//}
//// 3. 值方式返回局部对象：就是返回一个值
//
//person dowork2()
//{
//	person p1;    //默认构造函数调用
////	cout << (int*)&p1 << endl; 
//	return p1;
//}
//void test03()
//{
//	person p = dowork2(); //这里拷贝构造函数了
//	//cout << (int*)&p << endl;
//
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}

//这节课没怎么听懂