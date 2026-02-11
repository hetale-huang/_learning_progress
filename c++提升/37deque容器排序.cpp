//#include<iostream>
//using namespace std;
//#include <deque>
//#include <algorithm>//algorithm
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
//void test01()
//{
//
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//	sort(d.begin(), d.end());//这是一个算法，可以排序,从头到尾
//	//vector容器也可以用sort函数进行排序；
//	cout << "排序后的" << endl;
//	printDeque(d);
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}