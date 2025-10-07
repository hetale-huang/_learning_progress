//#include"swap.h";
//
//值传递
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////地址传递
//void swap2(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//void swap2(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//用地址传递就会改变实际参数
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	swap1(a, b); // 值传递不会改变实参
//	cout << a << endl;
//	cout << b << endl;
//	swap2(&a, &b); //地址传递会改变实参
//
//	cout << "a = " << a << endl;
//
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}