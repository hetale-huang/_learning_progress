//#include<iostream>
//#include<string>
//using namespace std;
//
////继承方式
//
////公共继承
//class base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class son1 :public base1
//{
//public:
//
//	void func()
//	{
//		m_a = 10;//父类中的公共权限成员 到子类中依然是公共权限；
//		m_b = 10;//父类中的保护权限成员到子类中依然是保护权限；保护权限类内可以访问；
//		//m_c = 10;//父类中的私有权限成员到子类中依然是私有权限；
//	}
//};
//
//void test01()
//{
//	son1 s1;
//	s1.m_a = 100;
//	//s1.m_b = 100;//保护权限类外访问不了
//}
//
////保护继承
//class base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class son2 : protected base2
//{
//public:
//	void func()
//	{
//		m_a = 100;//父类中公共成员，到子类中变为保护权限
//		m_b = 100;//父类中保护成员，到子类中变为保护权限
//		//m_c=100;//父类中私有成员，子类访问不到；
//	}
//};
//
//void test02()
//{
//	son2 s1;
//	//s1.m_a=1000;//在son2中m_a变为保护权限，因此类外访问不到
//	//s1.m_b=1000;//在son2中m_b保护权限，不可以访问；
//}
//
////私有继承
//class base3
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//
//class son3 : private base3
//{
//public:
//	void func()
//	{
//		m_a = 100;//父类中公共成员 到子类中变为 私有成员
//		m_b = 100;//父类中保护成员 到子类中变为 私有成员
//		//m_c=100;//父类中的私有成员，子类访问不到
//	}
//};
//
//class grandson3 : public son3
//{
//public:
//	void func()
//	{
//		//m_a = 1000;//这里算是孙子辈，son3那边私有了之后，都访问不到；
//		//m_b = 1000;
//	}
//};
//
//
//void test03()
//{
//	son3 s1;
//	//s1.m_a=1000;//到son3中变为私有成员 类外访问不到
//	//s1.m_b = 1000;//到son3中变为私有成员类外访问不到
//}
//
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}