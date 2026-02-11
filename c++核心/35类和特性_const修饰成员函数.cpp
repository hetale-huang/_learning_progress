//#include"swap.h"
////常函数
//class person
//{
//public:
//	//this指针的本质 是指针常量 指针的指向是不可以修改的；
//	//const person * const this;就是相当于加了两个const的this，指向也不能改，值也不能改；更近的不能改指向，更远的可以改指向；
//	//在成员函数后面加上const，修饰的是this指向，让指针指向的值也不可以修改；
//	void showperson() const
//	{
//		this->m_B = 100;//这样就可以改了；
//		//this->m_A = 100;
//		//this=NULL;//this指针不可以修改指针的指向；
//	}
//	void func()
//	{
//
//	}//常对象无法调用非常函数，因为像这个func，因为非常函数可能会修改对象的状态（成员变量），而const对象承诺不允许这么做。
//	//所以有可能而已；但是加上const承诺了不改变，所以只能调用非常函数；
//	int m_A;
//	mutable int m_B;//特殊变量，在常函数中也可以修改这个值；
//};
//
////常对象
//void test02()
//{
//	const person p;//常对象，不可以修改属性；
//	//p.m_A = 100;//就是这样，这底下的成员属性都不可以修改
//	p.m_B = 100;//加了mutable就可以修改；
//	//p.func();//常对象只能调用常函数
//}
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}