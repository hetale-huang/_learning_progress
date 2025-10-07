//#include <iostream>
//using namespace std;
//
//int main()
//{
//    //1.可以查看内存空间
//
//    int arr[2][3] =
//    {
//        {1,2,3},
//        {4,5,6}
//    };
//    cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;//int一个4，4*6
//    cout << "二维数组第一行占用内存为：" << sizeof(arr[0]) << endl;
//    cout << "第一个元素" << sizeof(arr[0][0]) << endl;
//
//    //获取行数和列数
//    cout << "行数" << sizeof(arr) / sizeof(arr[0]) << endl;
//    cout << "列数" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//    //查看首地址
//    cout << "数列的首地址" << (int)arr << endl;
//    cout << "数组第一行的首地址" << (int)arr[0] << endl;
//    cout << "数组第二行的首地址" << (int)arr[1] << endl;
//
//    cout << "第一个元素的首地址" << (int)&arr[0][0] << endl;
//
//    system("pause");
//    return 0;
//}
