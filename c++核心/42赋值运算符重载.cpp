//#include"swap.h"
//
////赋值运算符重载
//class person
//{
//public:
//	person(int age)
//	{
//		m_Age = new int(age);                  
//	}
//
//	//堆区数据要释放
//	~person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;//释放堆区内存，释放完之后就不能使用堆区的内存；
//			m_Age = NULL;//将堆区设置为空指针；表示指针已经不指向任何有效内存；
//
//			//这里就是浅拷贝；
//		}
//	}
//
//	//重载赋值运算
//	person& operator=(person &p)//返回引用才是真正的自身；
//	{
//		//编译器是提供浅拷贝
//		//m_Age = p.m_Age;
//
//		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//
//		//想要三个，就得返回这个对象的本身；
//
//		return *this;
//	}
//
//	int* m_Age;
//};
//
//void test01()
//{
//	person p1(18);
//
//	person p2(20);
//
//	person p3(30);
//
//	p3 = p2 = p1;
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//
////崩溃的原因是堆区的内存重复释放；
//
////所以要利用深拷贝来解决浅拷贝带来的问题；
//int main()
//{
//	test01();
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	//c = b = a;
//
//	//cout << "a=" << a << endl;
//	//cout << "b=" << b << endl;
//	//cout << "c=" << c << endl;
//
//	system("pause");
//	return 0;
//}