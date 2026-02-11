//#include<iostream>
//#include<string>
//using namespace std;
////利用虚继承 解决棱形继承的问题
////继承之前 加上关键字 virtual变为虚继承
////animal 类称为虚基类
//
////动物类
//class animal
//{
//public:
//	int m_age;
//};
//
////当菱形继承，两个父类拥有相同数据，需要加以作用域区分；
////继承之前 加上关键字 virtual变为虚继承
////羊类
//class sheep:virtual public animal{};
//
////驼类
//class tuo:virtual public animal{};
//
////羊驼类
//class sheeptuo :public sheep, public tuo
//{
//
//};
//
//void test01()
//{
//	sheeptuo st;
//	st.sheep::m_age = 18;
//	st.tuo::m_age = 28;
//
//	cout << "st.sheep::m_age=" << st.sheep::m_age << endl;
//	cout << "st.tuo::m_age=" << st.tuo::m_age << endl;
//	cout << "st.m_age=" << st.m_age << endl;
//
//	//这份数据我们知道 只有有一份就可以，棱形继承导致数据有两份，资源浪费；
//	//虚基类继承后面一类；
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}