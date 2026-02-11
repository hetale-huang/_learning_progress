//#include"swap.h"
//
//class person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is person class" << endl;
//	}
//
//	void showpersonage()
//	{
//		//报错的原因是因为传入的代码为空；
//		if (this == NULL)
//		{
//			return;//return就是结束当前函数的意思，在这里就是结束showpersonage的意思；然后不返回值；
//			//在int main里面就是结束当前函数的意思，并且如果return加数字就返回一下这个数字；
//		}
//		cout << "age=" <<this->m_Age << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	person * p = NULL;
//
//	//p->showClassName();
//
//	p->showpersonage();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}