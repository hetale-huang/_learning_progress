//#include"swap.h"
//
//void myswap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}//1.值传递
//
//void myswap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}//2.地址传递
//
//
////3.引用传递
//void myswap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;//一样的，但是地址传递要带*，引用不需要；
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	myswap01(a, b);
//
//	cout << "a:" << a << "b:" << b << endl;
//
//	myswap02(&a, &b);
//	cout << "a:" << a << "b:" << b << endl;
//
//	myswap03(a, b);//引用传递也会修饰实参；跟地址传递一样；
//	cout << "a:" << a << "b:" << b << endl;
//
//
//	system("pause");
//	return 0;
//}
