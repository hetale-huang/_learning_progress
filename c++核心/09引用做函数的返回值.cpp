//#include"swap.h"
//
////返回局部变量的引用
//int& test01()
//{
//	int a = 10;
//	return a;//局部变量
//}
//
////返回静态变量引用
//int& test02()
//{
//	static int a = 20;//静态变量存放在全局区，全局区上的数据在程序结束后系统释放
//	return a;
//}
//
//int main()
//{
//	//不能返回局部变量的引用
//	int& ref = test01();
//	cout << "ref=" << ref << endl;
//	cout << "ref=" << ref << endl;//所以会到地址去，回乱码
//
//
//	int& ref2 = test02();
//	cout << "ref2= " << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//	test02() = 1000;//函数返回的是引用，那么可以做左值，等式的左值。
//
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//	system("pause");
//	return 0;
//
//}