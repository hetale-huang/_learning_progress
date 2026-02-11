//#include<iostream>
//using namespace std;
//
//#include<string>
////查找和替换
//void test01()
//{
//	//查找
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "pos" << pos << endl;
//	}
//
//	pos = str1.rfind("de");//从右往左找
//	cout << "pos=" << pos << endl;
//}
//
//void test02()
//{
//	string str1 = "abcdefgde";
//	str1.replace(1, 3, "1111");//从下标 1 位置开始
//
//	//删除 3 个字符
//
//		//再把 "1111" 插入到这个位置
//	cout << "str1=" << str1 << endl;
//}
//
//int main()
//{  
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}