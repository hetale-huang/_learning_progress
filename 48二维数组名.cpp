//#include <iostream>
//using namespace std;
//
//int main()
//{
//    //1.���Բ鿴�ڴ�ռ�
//
//    int arr[2][3] =
//    {
//        {1,2,3},
//        {4,5,6}
//    };
//    cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;//intһ��4��4*6
//    cout << "��ά�����һ��ռ���ڴ�Ϊ��" << sizeof(arr[0]) << endl;
//    cout << "��һ��Ԫ��" << sizeof(arr[0][0]) << endl;
//
//    //��ȡ����������
//    cout << "����" << sizeof(arr) / sizeof(arr[0]) << endl;
//    cout << "����" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//    //�鿴�׵�ַ
//    cout << "���е��׵�ַ" << (int)arr << endl;
//    cout << "�����һ�е��׵�ַ" << (int)arr[0] << endl;
//    cout << "����ڶ��е��׵�ַ" << (int)arr[1] << endl;
//
//    cout << "��һ��Ԫ�ص��׵�ַ" << (int)&arr[0][0] << endl;
//
//    system("pause");
//    return 0;
//}
