//#include"swap.h";
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//前面提到arr就是数组的首地址，int *p=&a，就是可以直接加地址；
//
//	cout << "第一个元素：" << arr[0] << endl;
//	cout << "指针访问第一个元素" << *p << endl;
//
//	for (int i=0;i<9;i++)
//	{
//		p++;
//		cout << "输出元素" << *p << endl;//p++就会跳转下一个地址，也就是下4个字节；
//	}
//	return 0;
//}