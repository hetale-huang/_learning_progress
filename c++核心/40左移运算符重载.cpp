//#include"swap.h"
//class person
//{
//	friend ostream& operator<<(ostream& out, person& p);
//	//利用成员函数 重载左移运算符 p.operator<<（cout) 简化版本p<<cout
//public:
//	person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//private:
//	//不会利用成员函数重载<<运算符，因为无法实现cout在左侧
//	//void operator<<(cout)
//	//{
//
//	//}
//
//	int m_A;
//	int m_B;
//
//};
//
//// 所以只能运用全局函数来定义重载左移运算符
//ostream & operator<<(ostream & out,person & p)//本质 operator（cout，p） 就是cout<<p;operator就是这样，谁在左边就是调用的第一个对象；
//{
//	out << "p.m_A" << p.m_A << "p.m_B" << p.m_B ;
//	return cout;
//}
//
//void test01()
//{
//	person p(10, 10);
//	//p.m_A = 10;
//	//p.m_B = 10;
//
//	cout << p <<"完成了" << endl;  //因为一个联试思想，如果cout《《p返回的是void，那后面就无法输出，必须返回cout（输出对象）；  
//	//输出一个p，vs就会报错，因为不知道怎么取；所以要用成员函数定义；
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}