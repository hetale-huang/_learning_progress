//#include"swap.h"
//void showvalue(const int& v)
//{
//	cout << v << endl;
//}
//int main()
//{
//	//int & ref=10;本身引用需要一个合法的内存空间，所以这行错误；
//	//加入const就可以，编译器优化int temp=10；const int & ref=temp；
//	const int& ref = 10;
//	//ref=100;//加入const之后不能修改变量；
//	cout << ref << endl;
//
//	//函数中利用常量引用防止误操作修改实参；
//
//	int a = 10;
//	showvalue(a);
//
//	system("pause");
//
//	return 0;
//}