//#include"swap.h"
////交换的函数模板
//template<typename T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>//也可以替换成typename
////利用选择排序，进行对数组从小到大的排序
//void mysort(T arr[], int len)
//{
//	
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)//如果最大数的下标不是i，交换两者
//		{
//			myswap(arr[max], arr[i]);
//		}
//	}
//	
//}
//template<class T>
//void printarray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//测试char数组
//	char charArr[] = "bdcfeagh";
//	int num = sizeof(charArr) / sizeof(char);
//	mysort(charArr, num);
//	printarray(charArr, num);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}