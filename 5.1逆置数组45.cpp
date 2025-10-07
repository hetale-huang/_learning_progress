//#include<iostream>
//using namespace std;
//int main()
//{
//	//1.逆置数组的定义
//
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "逆置数组起始状态：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	//2.实现逆置数组
//	int start = 0;
//	int end = (sizeof(arr) / sizeof(arr[0])) - 1;
//
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;//temp是临时数组
//
//		end--;
//		start++;
//	}
//
//	//3.打印逆置数组
//	cout << "逆置数组转换状态：" << endl;
//	for (int j = 0; j < 5; j++)
//	{
//		cout << arr[j] << endl;
//	}
//
//	system("pause");
//	return 0;
//}