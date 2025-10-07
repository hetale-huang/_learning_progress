//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//	
//	cout << "排序之前：" << endl;
//
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	cout << endl;
//
//
//	//排序轮数，排序轮数等于总共个数-1；
//	for (int i = 0; i < 9-1; i++)
//	{
//		//内层循环,也就是内层排序的顺序
//		for (int k = 0; k <9-i-1; k++)
//		{
//			if (arr[k]>arr[k+1])
//			{
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//		}
//	}
//
//	//输出排序之后
//	cout << "排序之后：" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}