//#include<iostream>
//using namespace std;
//#include<string>
//
////类对象作为类成员
//
////手机类
//class phone
//{
//public:
//
//	phone(string pName)
//	{
//		cout << "phone的构造函数的调用" << endl;//先走手机的，再走person
//		m_pName = pName;
//	}
//	~phone()
//	{
//		cout << "phone的析构函数的调用" << endl;
//	}
//
//	//手机品牌名称
//
//	string m_pName;
//};
//
////人类
//class person
//{
//public:
//	person(string name, string pName):m_name(name),m_phone(pName)
//	{
//		cout << "person的构造函数的调用" << endl;//先走手机的构造函数的调用，再走手机的构造函数的调用；
//	}
//	~person()
//	{
//		cout << "person的析构函数的调用" << endl;
//	}
//
//	//姓名
//	string m_name;
//	//手机
//	phone m_phone;
//};
////当类中包含其他类的成员，那就会先走向其他类的构造函数，再构造自身；
////析构函数则是，先结束person再结束phone，因为先结束自身，再结束胳膊腿；
//
//void test01()
//{
//	person p("张三", "苹果MAX");
//
//	cout << p.m_name << "拿着：" << p.m_phone.m_pName << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}