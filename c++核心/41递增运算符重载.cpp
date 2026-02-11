//#include"swap.h"
//class myinteger
//{
//	friend ostream& operator<<(ostream& out, myinteger myint);
//public:
//	//构造函数
//	myinteger()
//	{
//		m_num = 0;
//	}
//	//前置++
//	myinteger& operator++()//返回的是这个对象的地址，其实也可以不加&，但是变成值返回了；
//	{
//		//先++
//		m_num++;//成员函数可以访问私有
//		//再返回
//		return *this;
//	}
//	//后置++
//	myinteger operator++(int)//为了和前置区分，在里面加int就行，这叫占位参数
//	{
//		myinteger temp = *this;//记录当前本身的值，然后让本身的值加1.返回的是以前的值。。。。
//		m_num++;
//		return temp;
//	}
//private:
//	int m_num;
//};
////前置递增返回的是引用，后置递增返回的是值；
//ostream& operator<<(ostream& out, myinteger myint)
//{
//	out << myint.m_num;
//	return out;
//}
////前置++
//void test01()
//{
//	myinteger myint;
//	cout << ++myint << endl;
//	cout << myint << endl;
//
//}
////后置++
//void test02()
//{
//	myinteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}