//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//	
//	cout << "����֮ǰ��" << endl;
//
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	cout << endl;
//
//
//	//�����������������������ܹ�����-1��
//	for (int i = 0; i < 9-1; i++)
//	{
//		//�ڲ�ѭ��,Ҳ�����ڲ������˳��
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
//	//�������֮��
//	cout << "����֮��" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}