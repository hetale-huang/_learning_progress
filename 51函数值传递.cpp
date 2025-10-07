//#include<iostream>
//using namespace std;
//
//void swap(int num1, int num2)//没有返回值的时候就写void；
//{
//	cout << "交换前：" << endl;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "交换后：" << endl;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//	//return:返回值不需要的时候可以不写return
//}
//int main()
//{
//	int a = 10;
//	int b = 5;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	swap(a, b);//当我们做值传递的时候，函数的形参发生改变，并不会影响实际参数
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	return 0;
//}