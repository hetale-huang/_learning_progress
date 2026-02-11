//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板
//template<class NameType,class AgeType=int>
//class person
//{
//public:
//	person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showperosn()
//	{
//		cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
//	}
//		
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	//person p("孙悟空"，1000)；错误，无法用自动类型推导
//	person<string, int>p("孙悟空", 1000);//正确，只能用显示指定类型
//
//	p.showperosn();
//}
//void test02()
//{
//	person<string>p("猪八戒", 999);
//
//	p.showperosn();
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}