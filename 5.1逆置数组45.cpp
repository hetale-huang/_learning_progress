//#include<iostream>
//using namespace std;
//int main()
//{
//	//1.��������Ķ���
//
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "����������ʼ״̬��" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	//2.ʵ����������
//	int start = 0;
//	int end = (sizeof(arr) / sizeof(arr[0])) - 1;
//
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;//temp����ʱ����
//
//		end--;
//		start++;
//	}
//
//	//3.��ӡ��������
//	cout << "��������ת��״̬��" << endl;
//	for (int j = 0; j < 5; j++)
//	{
//		cout << arr[j] << endl;
//	}
//
//	system("pause");
//	return 0;
//}