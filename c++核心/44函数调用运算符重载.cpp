//#include<iostream>
//using namespace std;
//#include<string>
////函数调用运算符重载
//
////打印输出类
//class MyPrint
//{
//public:
//
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void MyPrint02(string test)
//{
//	cout << test << endl;
//}
//
//void test01()
//{
//	MyPrint myprint;
//	myprint("hello world");//由于使用起来非常类似函数调用，所以称之为仿函数；
//
//	MyPrint02("hello world");
//
//}
////仿函数非常的灵活，没有固定的写法；
//// 加法类；
//class Myadd
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	Myadd myadd;
//	int ret = myadd(100, 100);
//	cout << "ret=" << ret << endl;
//
//	//匿名函数对象
//	cout << Myadd()(100, 100) << endl;//类加上小括号会创建出来一个 匿名的对象；后面那个括号就是使用重载的运算符；
//
//}
//
//int main()
//{
//	test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}