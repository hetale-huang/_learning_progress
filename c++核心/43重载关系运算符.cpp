//#include<iostream>
//using namespace std;
//
////重载关系运算符
//
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_Age = age;
//		m_name = name;
//	}
//	//重载关系运算符==号
//	bool operator==(person& p)
//	{
//		if (this->m_name == p.m_name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	int m_Age;
//	string m_name;
//};
//
//void test01()
//{
//	person p1("tom", 18);
//
//	person p2("jerry", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1 和 p2 是相等!" << endl;
//	}
//	else
//	{
//		cout << "不相等！" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}