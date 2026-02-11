//#include"swap.h"
//
//int func(int a, int b = 10, int c = 10)
//{
//	return a + b + c;
//}
////1.如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值,也就是往后之后就需要写这个参数的值；
////2.如果函数声明有默认值，函数实现的时候就不能有默认值；声明和实现必须只有一个有默认值；
//int func2(int a = 10, int b = 10);//函数声明
//int func2(int a, int b)//函数实现，就不能有默认声明；
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << "ret=" << func(20, 20) << endl;//20+20+10=50
//	cout << "ret=" << func(100) << endl;
//
//	system("pause");
//	return 0;
//}