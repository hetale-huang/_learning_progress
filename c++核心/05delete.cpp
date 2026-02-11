//#include"swap.h"
//
////int* func()
////{
////	int * a=new int(10);
////	return a;
////}
//
////int main() 
////{
////	int* p = func();
////
////	cout << *p << endl;
////	cout << *p << endl;
////
////	//delete释放堆区数据
////	delete p;
////
////	//cout << *p << endl; delete之后堆区被释放了，所以报错的空间不可访问
////
////	system("pause");
////	return 0;
////}
//
//int main()
//{
//	//创建10的整型数组，10代表这个数组有十个元素，现在new int{}现在就是返回第一个头的数组
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//在 C++ 中，数组下标运算 [] 本质就是指针运算 *(pointer + index) 的语法糖,也就是说arr【】
//		//也就是说arr[]本身就等于*（arr+i）arr的i的元素解引用出来的值
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放数组后面delete要加[]
//	delete[]arr;
//	system("pause");
//	return 0;
//}