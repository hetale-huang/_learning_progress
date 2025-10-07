#include"swap.h"

int * function()//然后要加上星号才能让他变成10，func就是一个地址
{
	int a = 10;
	return &a;//返回了一个地址
}
//栈区注意事项---不要返回局部变量的地址
//栈区的数据由编译器管理和释放

int main()
{
	int * p = function();//function就是a的地址，加上*才能变成整数
	//cout << p << endl;//这不对了，这就是地址
	//cout << p << endl;//这也一样
	cout << *p << endl;//这不对了，这就是地址
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;//虽然，但是，这是局部变量，vs太强了，所以会保留，但是不能这么写
	system("pause");
	return 0;
}