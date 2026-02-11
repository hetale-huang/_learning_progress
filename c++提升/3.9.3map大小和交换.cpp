////#include<iostream>
////using namespace std;
////#include <map>
////
////void printMap(map<int, int>& m)
////{
////	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
////	{
////		cout << "key = " << it->first << " value = " << it->second << endl;
////	}
////	cout << endl;
////}
////
////void test01()
////{
////	map<int, int>m; //默认构造
////	//m.insert(pair<int, int>(1, 10));
////	//m.insert(pair<int, int>(2, 20));
////	//m.insert(pair<int, int>(3, 30));
////	//printMap(m);
////	m.insert(pair<int, int>(1, 10));
////	m.insert(pair<int, int>(2, 20));
////	m.insert(pair<int, int>(3, 20));
////
////	map<int, int>m2(m); //拷贝构造
////	printMap(m2);
////
////	map<int, int>m3;
////	m3 = m2; //赋值
////	printMap(m3);
////}
////
////int main() {
////
////	test01();
////
////	system("pause");
////
////	return 0;
////}
//
//#include<iostream>
//using namespace std;
//#include<map>
//
//void printmap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << "value=" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 10));
//	m.insert(pair<int, int>(3, 30));
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为：" << m.size() << endl;
//	}
//}
//
////交换
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//
//	cout << "交换前" << endl;
//	printmap(m);
//	printmap(m2);
//
//	cout << "交换后" << endl;
//	m.swap(m2);
//	printmap(m);
//	printmap(m2);
//
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}