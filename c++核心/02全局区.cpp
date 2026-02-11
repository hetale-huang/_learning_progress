//#include"swap.h"
////全局变量
//int g_a = 10;
//int g_b = 11;
//
////const修饰的全局变量，全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{
//	//全局区
//
//	//全局变量、静态变量、常量
//
//	//创建普通局部变量
//	int a = 10;
//	int b = 10;
//
//	cout << "局部变量a的地址为：" << (int)&a << endl;
//	cout << "局部变量b的地址为：" << (int)&b << endl;
//
//	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
//	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;
//
//
//	//静态变量
//	static int a01 = 10;
//	static int a02 = 12;
//
//	cout << "静态变量a01的地址为：" << (int)&a01 << endl;
//	cout << "静态变量a02的地址为：" << (int)&a02 << endl;
//	//静态变量也放在全局区里面
//
//	//常量分为
//	
//	//字符串常量
//	cout << "字符串常量地址:" << (int)&"woddjadjsajdihjs" << endl;//也在全局区里面
//	
//	//const修饰的变量
//	const int a03 = 10;
//	cout << "const修饰的a03变量的地址：" << (int)&a03 << endl;//局部变量放在其他地方
//
//	cout << "const修饰的全局c_g_a变量的地址：" << (int)&c_g_a << endl;//全局常量放在全局区
//	cout << "const修饰的全局c_g_b变量的地址：" << (int)&c_g_b << endl;
//
//
//	system("pause");
//	return 0;
//};