#include<iostream>
using namespace std;

//对象的初始化和清理
//1.构造函数 进行初始化操作

class person
{
public:
	//1.1 构造函数
	//没有返回值 不用写void
	//函数名 与类名相同
	//构造函数可以有函数，可以发生重载
	//创造对象的时候，构造函数会自动调用，而且只调用一次
	person()
	{
		cout << "person构造函数的调用" << endl;
	}
};

//2.析构函数 进行清理的操作
void test01()
{
	person p;
}

int main()
{

	system("pause");

	return 0;
}