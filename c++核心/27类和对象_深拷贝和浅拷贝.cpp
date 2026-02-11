//#include"swap.h"
//
////深拷贝与浅拷贝
//
//class person
//{
//public:
//
//	person()
//	{
//
//		cout << "person的默认构造函数调用" << endl;
//
//	}
//
//	person(int age,int height)
//	{
//		
//		m_age = age;
//		m_Height= new int(height);//开辟到堆区；
//		cout << "person的有参构造函数调用" << endl; 
//
//	}
//
//	//自己实现拷贝构造函数，解决浅拷贝带来的问题；
//	
//	person(const person & p)
//	{ 
//		cout << "拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//
//		//m_Height = p.m_Height;编译器默认实现就是这行代码；这就是浅拷贝
//		
//		//深拷贝操作；
//
//		m_Height = new  int(* p.m_Height);//这就是深拷贝，这就是重新在堆区开辟一个，也就是两个；所以这就是深拷贝；
//
//	}
//
//
//	~person()
//	{
//		//析构代码，将堆区开辟数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "person的析构函数调用" << endl;
//	}
//
//	int m_age;
//	int* m_Height;//身高,将height开辟到堆区；
//};
//
//void test01()
//{
//	person p1(18,160);
//
//	cout << "p1的年龄为：" << p1.m_age<<"身高为："<<*p1.m_Height << endl;
//
//	person p2(p1);
//	cout << "p2的年龄为：" << p2.m_age <<"身高为："<<*p2.m_Height << endl;//虽然没有写拷贝函数，但是可以拷贝，这就是浅拷贝，编译器加上的拷贝函数；
//}//参考前一条，编译器就是会自动提供拷贝函数；
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}