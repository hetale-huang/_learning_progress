//#include"swap.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int &c;//这是错误的，别名必须直接定义他是哪个的别名；
//	int& c = a;//一旦初始化之后，就不可以更改
//	c = b;//这是赋值操作不是更改引用
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//
//	system("pause");
//	return 0;
//}