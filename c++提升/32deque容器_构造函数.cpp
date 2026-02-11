//#include<iostream>
//using namespace std;
//#include<deque>
//#include<string>
//
//void printDegue(const deque<int>& d)//只读只读 
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it=100;//防止这种改变
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////deque构造
//void test01()
//{
//	deque<int> d1;//无参构造函数
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDegue(d1);
//	deque<int> d2(d1.begin(), d1.end());
//	printDegue(d2);
//
//	deque<int>d3(10, 100);
//	printDegue(d3);
//
//	deque<int>d4 = d3;
//	printDegue(d4);
//
//}
// 
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}